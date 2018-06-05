# Test for basic properties of MTX64 Bitstrings.
# The functions that use them in combination with matrices are tested later
#
gap> START_TEST("bitstring.tst");
gap> bs := MTX64_EmptyBitString(10);
< MTX64 bitstring 0/10>
gap> Display(bs);
[0,0,0,0,0,0,0,0,0,0]
gap> MTX64_LengthOfBitString(bs);
10
gap> MTX64_WeightOfBitString(bs);
0
gap> MTX64_GetEntryOfBitString(bs,3);
0
gap> MTX64_SetEntryOfBitString(bs,3);
gap> MTX64_GetEntryOfBitString(bs,3);
1
gap> MTX64_SetEntryOfBitString(bs,7);
gap> MTX64_SetEntryOfBitString(bs,9);
gap> bs1 := ShallowCopy(bs);
< MTX64 bitstring 3/10>
gap> MTX64_SetEntryOfBitString(bs,0);
gap> Display(bs);
[1,0,0,1,0,0,0,1,0,1]
gap> Display(bs1);
[0,0,0,1,0,0,0,1,0,1]
gap> MTX64_WeightOfBitString(bs);
4
gap> MTX64_SetEntryOfBitString(bs,0);
gap> MTX64_WeightOfBitString(bs);
4
gap> bs2 := MTX64_ComplementBitString(bs);
< MTX64 bitstring 6/10>
gap> Display(bs2);
[0,1,1,0,1,1,1,0,1,0]
gap> MTX64_PositionsBitString(bs2);
[ 2, 3, 5, 6, 7, 9 ]
gap> sub := MTX64_EmptyBitString(6);
< MTX64 bitstring 0/6>
gap> MTX64_SetEntryOfBitString(sub,1);
gap> MTX64_BSCombine(bs, sub);
[ < MTX64 bitstring 5/10>, < MTX64 bitstring 4/5> ]
gap> MTX64_BSCombine(bs2, sub);
Error, MTX64_BSCombine: bitstrings incompatible
gap> STOP_TEST("bitstring.tst");