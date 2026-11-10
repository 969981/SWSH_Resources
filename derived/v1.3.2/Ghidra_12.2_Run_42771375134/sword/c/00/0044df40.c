/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044df40; name: FUN_0044df40
 */


undefined8 FUN_0044df40(long *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  char local_3c [4];
  int local_38 [2];
  
  *param_3 = 0;
  if (param_1[6] == 0) {
    if (*(uint *)(param_1 + 2) <= param_2) {
      param_2 = *(uint *)(param_1 + 2);
    }
    *param_3 = param_2;
    *(uint *)(param_1 + 2) = (int)param_1[2] - param_2;
    param_1[5] = param_1[5] + (ulong)*param_3;
  }
  else if (param_2 != 0) {
    puVar1 = (uint *)(param_1 + 2);
    do {
      while (uVar2 = *puVar1, uVar2 == 0) {
        if (param_2 <= *(uint *)((long)param_1 + 0x14)) {
          uVar2 = *(uint *)(param_1 + 3);
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = *(uint *)((long)param_1 + 0x14) / uVar2;
          }
          uVar5 = (**(code **)(*(long *)param_1[6] + 0x38))
                            ((float)(uVar3 * uVar2) / *(float *)(param_1 + 7),(long *)param_1[6],
                             *param_1,uVar3 * uVar2,1,*(undefined1 *)((long)param_1 + 0x3c),puVar1);
          if ((int)uVar5 != 1) {
            return uVar5;
          }
          iVar4 = (**(code **)(*(long *)param_1[6] + 0x68))();
          if (iVar4 != 1) {
            return 1;
          }
          (**(code **)(*(long *)param_1[6] + 0x48))((long *)param_1[6],local_3c);
          if ((local_3c[0] == '\0') || (param_2 <= *puVar1)) {
            param_1[1] = *param_1 + (ulong)param_2;
            *param_3 = *param_3 + param_2;
            *(uint *)(param_1 + 2) = (int)param_1[2] - param_2;
            return 1;
          }
          return 2;
        }
        uVar5 = (**(code **)(*(long *)param_1[6] + 0x50))((long *)param_1[6],param_2,1,local_38);
        if ((int)uVar5 != 1) {
          return uVar5;
        }
        *param_3 = *param_3 + local_38[0];
        param_2 = param_2 - local_38[0];
        if (param_2 == 0) {
          return 1;
        }
      }
      if (param_2 <= uVar2) {
        uVar2 = param_2;
      }
      param_1[1] = param_1[1] + (ulong)uVar2;
      *param_3 = *param_3 + uVar2;
      *(uint *)(param_1 + 2) = (int)param_1[2] - uVar2;
      param_2 = param_2 - uVar2;
    } while (param_2 != 0);
  }
  return 1;
}


