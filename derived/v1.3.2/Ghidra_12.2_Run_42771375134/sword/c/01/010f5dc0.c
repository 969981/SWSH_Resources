/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f5dc0; name: FUN_010f5dc0
 */


void FUN_010f5dc0(long *param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  
  plVar3 = (long *)(*(long *)(*param_1 + 0x5d0) + 0x60);
  (**(code **)(*plVar3 + 8))(plVar3,0);
  lVar6 = *param_1;
  uVar4 = FUN_010f6a80(param_2);
  FUN_010f6260(lVar6,uVar4);
  FUN_00ffa3d0(*param_1,0);
  pcVar5 = (code *)param_1[3];
  if (pcVar5 != (code *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    (*pcVar5)(param_1 + 6);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 6);
    lVar6 = *param_3;
    lVar1 = param_3[1];
    lVar2 = param_3[3];
    param_1[4] = param_3[2];
    param_1[5] = lVar2;
    param_1[2] = lVar6;
    param_1[3] = lVar1;
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


