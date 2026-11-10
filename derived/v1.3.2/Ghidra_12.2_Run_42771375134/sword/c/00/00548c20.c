/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00548c20; name: FUN_00548c20
 */


void FUN_00548c20(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  *param_1 = (long)(PTR_DAT_02713ba8 + 0x10);
  uVar2 = param_1[10];
  if (uVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 9);
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        plVar1 = *(long **)(uVar2 + uVar4 * 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x18))();
          FUN_0053e6d0(param_1[3],*(undefined4 *)((long)param_1 + 0x44));
          uVar3 = *(uint *)(param_1 + 9);
          uVar2 = param_1[10];
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
      if (uVar2 == 0) goto LAB_00548cb8;
    }
    uVar4 = uVar2 + *(long *)(uVar2 - 8) * 8;
    do {
      uVar4 = uVar4 - 8;
    } while (uVar2 <= uVar4);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[10] = 0;
  }
LAB_00548cb8:
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 0x18))();
    param_1[0x14] = 0;
  }
  FUN_005464f0(param_1);
  return;
}


