#include "gmock/gmock.h"
#include "gtest/gtest.h"

extern "C" {
#include "mymem.h"
}

#include <limits.h>

TEST(BitlibTest, CreateSequence_AreValuesCorrect) {
    size_t n = 5;

    int* seq = create_sequence(n);
    EXPECT_THAT(std::vector<uint8_t>(seq, seq + n),
                ::testing::ElementsAre(1, 2, 3, 4, 5));

    if (seq != NULL) {
        free(seq);
    }
}

TEST(BitlibTest, CreateSequence_TooLarge) {
    int* seq = create_sequence(ULONG_MAX);

    EXPECT_EQ(seq, (int*) NULL);

    if (seq != (int*) NULL) {
        free(seq);
    }
}

TEST(BitlibTest, CreateSequence_LooseHandleToAllocatedMemoryBlock) {
    int* seq = create_sequence(1);

    if (seq != (int*) NULL) {
        free(seq);
    }

    seq = create_sequence(2);

    if (seq != (int*) NULL) {
        free(seq);
    }
}
