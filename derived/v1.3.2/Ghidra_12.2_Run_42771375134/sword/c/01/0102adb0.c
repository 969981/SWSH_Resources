/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102adb0; name: FUN_0102adb0
 */


undefined1 FUN_0102adb0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_78 [20];
  int local_64;
  
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  iVar2 = FUN_015114c0(lVar7,0x4a053a780d987d50);
  iVar3 = FUN_015114c0(lVar7,0x8e8a2466355c8314);
  FUN_01029cb0(*(undefined8 *)PTR_DAT_027108c0);
  FUN_01029ad0(auStack_78);
  uVar4 = nn::time::IsLeapYear(local_64 + 0x76c);
  if ((((uVar4 & 1) == 0) && (param_3 == 2)) && (param_4 == 0x1c)) {
    bVar1 = iVar2 == 2;
    uVar5 = 1;
    if (bVar1 && iVar3 == 0x1d) {
      uVar5 = 2;
    }
    if (!bVar1 || (!bVar1 || iVar3 != 0x1d) && iVar3 != 0x1c) {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = iVar2 == param_3 && iVar3 == param_4;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return uVar5;
}


