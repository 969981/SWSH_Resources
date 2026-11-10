/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103b440; name: FUN_0103b440
 */


void FUN_0103b440(long param_1,undefined8 *param_2,long *param_3,int param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  pcVar3 = *(code **)(param_1 + 0x5d8);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x5e0) = 0;
    *(undefined8 *)(param_1 + 0x5e8) = 0;
    *(undefined8 *)(param_1 + 0x5d0) = 0;
    *(undefined8 *)(param_1 + 0x5d8) = 0;
    (*pcVar3)(param_1 + 0x5f0);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x5f0);
    uVar2 = *param_2;
    uVar5 = param_2[1];
    uVar1 = param_2[3];
    *(undefined8 *)(param_1 + 0x5e0) = param_2[2];
    *(undefined8 *)(param_1 + 0x5e8) = uVar1;
    *(undefined8 *)(param_1 + 0x5d0) = uVar2;
    *(undefined8 *)(param_1 + 0x5d8) = uVar5;
  }
  lVar4 = *(long *)(param_1 + 0x660);
  if (*param_3 == 0) {
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
    uVar5 = *(undefined8 *)(param_1 + 0x660);
    uVar2 = FUN_0077d470(*param_3);
    FUN_014bf410(uVar5,uVar2,10,0);
  }
  *(int *)(param_1 + 0x650) = param_4;
  *(undefined4 *)(param_1 + 0x654) = param_5;
  *(undefined4 *)(param_1 + 0x658) = param_5;
  FUN_0103b530(param_1,0,param_5);
  return;
}


