/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a41f0; name: FUN_004a41f0
 */


long FUN_004a41f0(long *param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return 0;
  }
  uVar6 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar6) {
    iVar7 = 0;
    uVar5 = uVar6;
    do {
      while( true ) {
        uVar1 = uVar5 + iVar7;
        if ((int)uVar1 < 0) {
          uVar1 = uVar1 + 1;
        }
        uVar6 = (int)uVar1 >> 1;
        uVar3 = *(ulong *)(lVar4 + (-(ulong)(uVar6 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar6 << 6
                                   ));
        if (*param_2 <= uVar3) break;
joined_r0x004a42e4:
        iVar7 = uVar6 + 1;
        uVar6 = uVar5;
        if ((int)uVar5 <= iVar7) goto LAB_004a42e8;
      }
      if (uVar3 == *param_2) {
        lVar2 = lVar4 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x40;
        if ((*(uint *)(lVar2 + 8) < (uint)param_2[1]) ||
           ((*(uint *)(lVar2 + 8) == (uint)param_2[1] &&
            ((*(uint *)(lVar2 + 0x10) < (uint)param_2[2] ||
             ((*(uint *)(lVar2 + 0x10) == (uint)param_2[2] &&
              (((*(char *)(lVar2 + 0x18) + 1U & 0x1f) < ((char)param_2[3] + 1U & 0x1f) ||
               ((*(char *)(lVar2 + 0x18) == (char)param_2[3] &&
                (((byte)(*(char *)(lVar2 + 0x20) + 1U) < (byte)((char)param_2[4] + 1U) ||
                 ((*(char *)(lVar2 + 0x20) == (char)param_2[4] &&
                  (*(ulong *)(lVar2 + 0x28) < param_2[5])))))))))))))))) goto joined_r0x004a42e4;
      }
      uVar5 = uVar6;
    } while (iVar7 < (int)uVar6);
  }
LAB_004a42e8:
  return lVar4 + (long)(int)uVar6 * 0x40;
}


