/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002af9c0; name: FUN_002af9c0
 */


void FUN_002af9c0(uint param_1,uint param_2,uint *param_3,undefined8 *param_4,uint param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  byte local_38 [4];
  undefined2 local_34;
  
  if (param_1 < 0x100) {
    if (param_2 != 0) {
      uVar4 = (ulong)param_2;
      do {
        (**(code **)*param_4)(param_4,local_38,1);
        uVar4 = uVar4 - 1;
        *param_3 = (uint)local_38[0];
        param_3 = param_3 + 1;
      } while (uVar4 != 0);
    }
  }
  else if (param_1 >> 0x10 == 0) {
    if (param_2 != 0) {
      uVar4 = (ulong)param_2;
      if ((param_5 & 1) == 0) {
        do {
          (**(code **)*param_4)(param_4,&local_34,2);
          uVar4 = uVar4 - 1;
          *param_3 = (uint)local_34;
          param_3 = param_3 + 1;
        } while (uVar4 != 0);
      }
      else {
        do {
          (**(code **)*param_4)(param_4,&local_34,2);
          local_34 = CONCAT11((undefined1)local_34,local_34._1_1_);
          uVar4 = uVar4 - 1;
          *param_3 = (uint)local_34;
          param_3 = param_3 + 1;
        } while (uVar4 != 0);
      }
    }
  }
  else {
    (**(code **)*param_4)(param_4,param_3,param_2 << 2);
    if ((param_2 != 0) && ((param_5 & 1) != 0)) {
      uVar4 = (ulong)param_2;
      puVar3 = (undefined1 *)((long)param_3 + 3);
      do {
        uVar1 = puVar3[-3];
        puVar3[-3] = *puVar3;
        uVar2 = puVar3[-2];
        *puVar3 = uVar1;
        puVar3[-2] = puVar3[-1];
        puVar3[-1] = uVar2;
        uVar4 = uVar4 - 1;
        puVar3 = puVar3 + 4;
      } while (uVar4 != 0);
    }
  }
  return;
}


