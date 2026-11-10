/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075b970; name: FUN_0075b970
 */


long * FUN_0075b970(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar4 = param_1[9];
  uVar8 = param_1[10];
  plVar2 = (long *)(param_1[8] + uVar4 * 8);
  if (uVar4 < uVar8) {
    uVar9 = *param_1;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar9;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar6 = *param_2;
      *plVar2 = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      param_1[9] = param_1[9] + 1;
      return plVar2;
    }
  }
  else {
    uVar7 = param_1[1];
    uVar1 = uVar4 + 1;
    if (uVar1 - uVar8 <= uVar7 - uVar8) {
      uVar3 = uVar8 << 3;
      if (4 < uVar8 >> 0x3d) {
        uVar3 = 0xffffffffffffffff;
      }
      if (uVar8 >> 0x3d == 0) {
        uVar3 = (uVar8 << 3) / 5;
      }
      uVar8 = uVar7;
      if (uVar3 <= uVar7) {
        uVar8 = uVar3;
      }
      if (uVar1 <= uVar8) {
        uVar1 = uVar8;
      }
      if (uVar1 <= uVar7) {
        uVar9 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar1 << 3,8);
        FUN_0075c6d0(param_1,uVar9,uVar1,plVar2,1,param_2);
        return (long *)(param_1[8] + ((long)(uVar4 << 3) >> 3) * 8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


