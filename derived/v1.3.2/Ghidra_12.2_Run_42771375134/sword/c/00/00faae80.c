/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00faae80; name: FUN_00faae80
 */


void FUN_00faae80(long param_1,long *param_2,int param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong local_38;
  
  uVar1 = FUN_014bca10(*param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (param_3 == 1) {
    lVar2 = *(long *)(*param_2 + 0x60);
    if (lVar2 == 0) {
      FUN_0077e740(0,param_4 & 0xffffffff,*(undefined8 *)(param_1 + 0xa0));
      goto LAB_00faaf64;
    }
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077e740(lVar2,param_4 & 0xffffffff,*(undefined8 *)(param_1 + 0xa0));
  }
  else {
    if (param_3 != 2) goto LAB_00faaf64;
    lVar2 = *(long *)(*param_2 + 0x60);
    local_38 = param_4;
    if (lVar2 == 0) {
      FUN_0077eb10(0,&local_38,*(undefined8 *)(param_1 + 0xa0));
      goto LAB_00faaf64;
    }
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(lVar2,&local_38,*(undefined8 *)(param_1 + 0xa0));
  }
  (**(code **)(*plVar3 + 0x18))(plVar3);
LAB_00faaf64:
  (**(code **)(**(long **)(param_1 + 0x68) + 0x50))
            (*(long **)(param_1 + 0x68),*(undefined8 *)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}


