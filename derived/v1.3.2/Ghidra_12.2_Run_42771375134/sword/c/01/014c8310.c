/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c8310; name: FUN_014c8310
 */


void FUN_014c8310(long param_1,uint param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  FUN_0077d4d0(*(undefined8 *)(param_1 + 0x170),param_3);
  if (param_4 == 0) {
    uVar10 = 0;
  }
  else if (param_4 == 1) {
    uVar10 = 1;
  }
  else {
    cVar1 = FUN_008d3750();
    uVar10 = (ulong)(cVar1 == '\x05') << 1;
  }
  uVar2 = FUN_008d3fc0(param_5,0);
  uVar3 = FUN_008d4030(*(undefined8 *)PTR_DAT_02710828);
  FUN_014ba1b0(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x170),uVar2,uVar3);
  uVar5 = FUN_014ba2d0(*(undefined8 *)(param_1 + 400));
  lVar9 = *(long *)(param_1 + 0x170);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  uVar6 = FUN_00864910(*(undefined8 *)(param_1 + 0x178),899);
  uVar4 = FUN_008d3750();
  if (((uVar4 & 0xff) - 2 < 4) || ((uVar4 & 0xff) == 7)) {
    uVar7 = FUN_0077d450(lVar9,*(undefined8 *)(param_1 + 0x178));
    if ((uVar7 & 1) == 0) {
      uVar10 = uVar10 | 0x200;
      uVar4 = *(uint *)(param_1 + 0x198);
    }
    else {
      uVar10 = uVar6 & 0x1f;
      uVar4 = *(uint *)(param_1 + 0x198);
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x198);
  }
  if (param_2 < uVar4) {
    *(ulong *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 8) = uVar10;
    FUN_0077d4d0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18),uVar5);
    *(undefined2 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar8 = *(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar8 + 0x12) = *(ushort *)(lVar8 + 0x12) & 0xfffe;
  }
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014c8420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  return;
}


