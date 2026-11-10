/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01478250; name: FUN_01478250
 */


void FUN_01478250(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  if ((*(uint *)(*(long *)(param_1 + 0x90) + 0x730) | 4) != 4) {
    FUN_01471200();
    FUN_01471390(*(undefined8 *)(param_1 + 0x90),1);
    *(undefined4 *)(param_1 + 0x7c) = 1;
    *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x730) = 0;
    FUN_01471470(*(undefined8 *)(param_1 + 0x90),0);
    FUN_01470b40(*(undefined8 *)(param_1 + 0x90));
    lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x618);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
    FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar1 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_0146e370();
    for (; plVar1 != (long *)lVar3; plVar1 = (long *)*plVar1) {
    }
    if (*(int *)(param_1 + 0x9c) != *(int *)(puVar5[2] + 0x10)) {
      FUN_01472540(puVar5 + -10);
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0x740);
    FUN_006cf0a0(&local_50,&DAT_026a3680);
    lVar3 = local_38;
    *(undefined8 *)(lVar4 + 0x120) = local_50;
    *(undefined8 *)(lVar4 + 0x128) = local_48;
    *(undefined8 *)(lVar4 + 0x130) = local_40;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar4 + 0x138);
    *(long *)(lVar4 + 0x138) = lVar3;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


