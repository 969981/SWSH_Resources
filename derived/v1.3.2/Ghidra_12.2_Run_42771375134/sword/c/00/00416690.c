/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00416690; name: FUN_00416690
 */


undefined8 FUN_00416690(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  short sVar7;
  long lVar8;
  
  *param_1 = param_2;
  *(byte *)((long)param_1 + 10) =
       *(byte *)((long)param_1 + 10) & 0xfc | (*(short *)(param_2 + 0x14) == 0) << 1 | 1;
  sVar7 = *(short *)(param_2 + 0x14);
  if (sVar7 == 0) {
    sVar7 = 0;
  }
  else if (*(short *)(param_2 + 0x18) != 0 || *(short *)(param_2 + 0x16) != 0) {
    iVar1 = (int)*(short *)(param_2 + 0x16) + (int)sVar7;
    iVar3 = (int)(short)iVar1;
    iVar4 = (int)(short)(*(short *)(param_2 + 0x18) + sVar7);
    if (iVar1 < 1) {
      iVar3 = 1;
    }
    if (iVar4 != iVar3) {
      lVar8 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
      *(long *)PTR_DAT_02712b80 = lVar8;
      iVar4 = (1 - iVar3) + iVar4;
      sVar7 = 0;
      uVar5 = (ulong)lVar8 >> 0x21;
      if (iVar4 != 0) {
        sVar7 = (short)((int)(uint)uVar5 / iVar4);
      }
      *(short *)(param_1 + 1) = ((short)uVar5 - sVar7 * (short)iVar4) + (short)iVar3;
      uVar2 = *(uint *)(param_2 + 0x30);
      goto joined_r0x0041675c;
    }
  }
  *(short *)(param_1 + 1) = sVar7;
  uVar2 = *(uint *)(param_2 + 0x30);
joined_r0x0041675c:
  if (uVar2 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00416788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)(&DAT_01d4df30 + *(int *)(&DAT_01d4df30 + (ulong)uVar2 * 4)))();
    return uVar6;
  }
  return 2;
}


