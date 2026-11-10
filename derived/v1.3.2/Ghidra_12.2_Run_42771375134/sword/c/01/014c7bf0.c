/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c7bf0; name: FUN_014c7bf0
 */


void FUN_014c7bf0(long param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  FUN_0087d210(param_3,*(undefined8 *)(param_1 + 0x170));
  iVar2 = FUN_0087ccf0(param_3);
  if (iVar2 == 0) {
    uVar11 = 0;
  }
  else if (iVar2 == 1) {
    uVar11 = 1;
  }
  else {
    cVar1 = FUN_008d3750();
    uVar11 = (ulong)(cVar1 == '\x05') << 1;
  }
  uVar6 = FUN_00878a50(param_3);
  uVar3 = FUN_008d3fc0(uVar6,0);
  uVar4 = FUN_008d4030(*(undefined8 *)PTR_DAT_02710828);
  FUN_014ba1b0(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x170),uVar3,uVar4);
  uVar6 = FUN_014ba2d0(*(undefined8 *)(param_1 + 400));
  lVar10 = *(long *)(param_1 + 0x170);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  uVar7 = FUN_00864910(*(undefined8 *)(param_1 + 0x178),899);
  uVar5 = FUN_008d3750();
  if (((uVar5 & 0xff) - 2 < 4) || ((uVar5 & 0xff) == 7)) {
    uVar8 = FUN_0077d450(lVar10,*(undefined8 *)(param_1 + 0x178));
    if ((uVar8 & 1) == 0) {
      uVar11 = uVar11 | 0x200;
      uVar5 = *(uint *)(param_1 + 0x198);
    }
    else {
      uVar11 = uVar7 & 0x1f;
      uVar5 = *(uint *)(param_1 + 0x198);
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x198);
  }
  if (param_2 < uVar5) {
    *(ulong *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 8) = uVar11;
    FUN_0077d4d0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18),uVar6);
    *(undefined2 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar9 = *(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar9 + 0x12) = *(ushort *)(lVar9 + 0x12) & 0xfffe;
  }
  if (lVar10 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014c7d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  return;
}


