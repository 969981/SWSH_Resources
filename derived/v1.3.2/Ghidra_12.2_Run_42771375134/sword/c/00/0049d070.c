/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049d070; name: FUN_0049d070
 */


void FUN_0049d070(undefined8 param_1,undefined8 param_2,long param_3,int param_4,float *param_5,
                 float *param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 local_54;
  
  if (*(int *)(param_3 + 0x4c) == 3) {
    *param_5 = 1.0;
    *param_6 = 1.0;
    uVar2 = (ulong)*(uint *)(param_3 + 0x58);
    if (*(uint *)(param_3 + 0x58) != 0) {
      lVar3 = *(long *)(param_3 + 0x50);
      lVar4 = lVar3 + 8;
      do {
        if (*(int *)(lVar4 + -4) == param_4) {
          local_54 = 0;
          fVar5 = (float)FUN_0042e770(param_2,lVar4,0,&local_54);
          *param_6 = *param_6 * fVar5;
          local_54 = 0;
          fVar5 = (float)FUN_0042e770(param_1,lVar4,0,&local_54);
          *param_5 = *param_5 * fVar5;
          lVar3 = *(long *)(param_3 + 0x50);
          uVar2 = (ulong)*(uint *)(param_3 + 0x58);
        }
        lVar1 = lVar4 + 0x10;
        lVar4 = lVar4 + 0x18;
      } while (lVar1 != lVar3 + uVar2 * 0x18);
    }
  }
  else {
    *param_5 = 0.0;
    *param_6 = 0.0;
    uVar2 = (ulong)*(uint *)(param_3 + 0x58);
    if (*(uint *)(param_3 + 0x58) != 0) {
      lVar3 = *(long *)(param_3 + 0x50);
      lVar4 = lVar3 + 8;
      do {
        if (*(int *)(lVar4 + -4) == param_4) {
          local_54 = 0;
          fVar5 = (float)FUN_0042e770(param_2,lVar4,0,&local_54);
          *param_6 = *param_6 + fVar5;
          local_54 = 0;
          fVar5 = (float)FUN_0042e770(param_1,lVar4,0,&local_54);
          *param_5 = *param_5 + fVar5;
          lVar3 = *(long *)(param_3 + 0x50);
          uVar2 = (ulong)*(uint *)(param_3 + 0x58);
        }
        lVar1 = lVar4 + 0x10;
        lVar4 = lVar4 + 0x18;
      } while (lVar1 != lVar3 + uVar2 * 0x18);
    }
  }
  return;
}


