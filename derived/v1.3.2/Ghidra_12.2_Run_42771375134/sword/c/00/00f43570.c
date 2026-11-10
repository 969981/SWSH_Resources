/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f43570; name: FUN_00f43570
 */


void FUN_00f43570(float param_1,float param_2,float param_3,float param_4,long param_5,uint param_6)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long local_70;
  undefined1 auStack_68 [8];
  
  *(int *)(param_5 + 0x290) = *(int *)(param_5 + 0x100);
  if (*(int *)(param_5 + 0x100) != 0) {
    uVar3 = 0;
    do {
      lVar1 = FUN_00f45130(auStack_68,*(undefined8 *)(param_5 + 0x60));
      if (lVar1 == 0) {
        local_70 = lVar1;
      }
      else {
        plVar2 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        local_70 = lVar1;
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      FUN_00f45290(param_5 + 0xb0,&local_70);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_5 + 0x290));
  }
  uVar3 = 1 << (ulong)(param_6 & 0x1f);
  *(float *)(param_5 + 0x280) = (param_3 - param_1) / (float)uVar3;
  *(uint *)(param_5 + 0x294) = param_6;
  *(float *)(param_5 + 0x270) = param_1;
  *(float *)(param_5 + 0x274) = param_2;
  *(float *)(param_5 + 0x278) = param_3;
  *(float *)(param_5 + 0x27c) = param_4;
  *(uint *)(param_5 + 0x288) = uVar3;
  *(uint *)(param_5 + 0x28c) = uVar3;
  *(float *)(param_5 + 0x284) = (param_4 - param_2) / (float)uVar3;
  return;
}


