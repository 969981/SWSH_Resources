/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102af30; name: FUN_0102af30
 */


void FUN_0102af30(undefined8 param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_68 [12];
  undefined4 local_5c;
  int iStack_58;
  
  FUN_01029cb0(*(undefined8 *)PTR_DAT_027108c0);
  auVar4 = FUN_01029ad0(auStack_68);
  if (*param_2 == 0) {
    iVar1 = FUN_0102adb0(auVar4._0_8_,auVar4._8_8_,iStack_58 + 1,local_5c);
  }
  else {
    plVar2 = (long *)(*param_2 + 0x48);
    auVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
    iVar1 = FUN_0102adb0(auVar4._0_8_,auVar4._8_8_,iStack_58 + 1,local_5c);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (iVar1 == 0) {
    FUN_01511120(lVar3,0x67f239d261a2c946);
    FUN_01511120(lVar3,0xcf2478287df6c2aa);
  }
  else {
    FUN_01511030();
    if (iVar1 == 2) {
      FUN_01511030(lVar3,0xcf2478287df6c2aa);
    }
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


