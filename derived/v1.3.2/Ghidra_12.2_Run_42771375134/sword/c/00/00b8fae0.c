/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8fae0; name: FUN_00b8fae0
 */


void FUN_00b8fae0(long param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  lVar2 = *param_3;
  if (lVar2 == 0) {
    FUN_0077eb10(0,param_4,*(undefined8 *)(param_1 + 0x78));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0x88),uVar1,*(undefined8 *)(param_1 + 0x78));
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(lVar2,param_4,*(undefined8 *)(param_1 + 0x78));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0x88),uVar1,*(undefined8 *)(param_1 + 0x78));
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)((long)param_2 + 0x12) = 0;
  *(undefined2 *)(param_2 + 2) = 0x101;
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = *(undefined8 *)(param_1 + 0x60);
  return;
}


