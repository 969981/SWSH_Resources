/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01036ef0; name: FUN_01036ef0
 */


void FUN_01036ef0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x5d0);
  pcVar4 = *(code **)(lVar5 + 0x168);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x170) = 0;
    *(undefined8 *)(lVar5 + 0x178) = 0;
    *(undefined8 *)(lVar5 + 0x160) = 0;
    *(undefined8 *)(lVar5 + 0x168) = 0;
    (*pcVar4)(lVar5 + 0x180);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,lVar5 + 0x180);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    *(undefined8 *)(lVar5 + 0x170) = param_2[2];
    *(undefined8 *)(lVar5 + 0x178) = uVar3;
    *(undefined8 *)(lVar5 + 0x160) = uVar1;
    *(undefined8 *)(lVar5 + 0x168) = uVar2;
  }
  return;
}


