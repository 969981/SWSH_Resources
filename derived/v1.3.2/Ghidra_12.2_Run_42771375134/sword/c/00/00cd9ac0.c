/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd9ac0; name: FUN_00cd9ac0
 */


void FUN_00cd9ac0(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 200);
  if (*(char *)(plVar3[2] + 0x730) != '\0') {
    FUN_00cd1280(*(undefined8 *)(param_1 + 0x90),0xb,1);
    FUN_012ae5a0(param_1 + 0x110,(long)*(int *)(*(long *)(param_1 + 0xd8) + 0x26d0));
    *(undefined1 *)(**(long **)(param_1 + 200) + 0xb9) = 1;
    lVar4 = *(long *)PTR_DAT_027185f8;
    if (lVar4 != 0) {
      uVar1 = FUN_0120e820(lVar4);
      FUN_0120e5b0(lVar4,uVar1);
    }
    *(undefined4 *)(param_1 + 0xf4) = 0x10;
    plVar3 = *(long **)(param_1 + 200);
  }
  if (*(char *)(*plVar3 + 0xb8) != '\0') {
    FUN_00cd1280(*(undefined8 *)(param_1 + 0x90),7,1);
    uVar2 = FUN_011fca80(*(undefined8 *)PTR_DAT_02718f20);
    uVar1 = 10;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0x12;
    }
    *(undefined4 *)(param_1 + 0xf4) = uVar1;
  }
  return;
}


