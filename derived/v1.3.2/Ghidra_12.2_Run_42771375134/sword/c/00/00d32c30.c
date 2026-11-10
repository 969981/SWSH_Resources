/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d32c30; name: FUN_00d32c30
 */


void FUN_00d32c30(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar1 = param_1[1];
  lVar5 = param_1[2];
  while (lVar5 != lVar1) {
    param_1[2] = lVar5 + -0x20;
    lVar3 = *(long *)(lVar5 + -0x20);
    *(undefined8 *)(lVar5 + -0x20) = 0;
    if (lVar3 != 0) {
      puVar4 = *(undefined8 **)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = 0;
      if (puVar4 != (undefined8 *)0x0) {
        pcVar2 = (code *)puVar4[1];
        if (pcVar2 != (code *)0x0) {
          puVar4[2] = 0;
          puVar4[3] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          (*pcVar2)(puVar4 + 4);
        }
        (**(code **)(**(long **)(lVar3 + 0x30) + 0x18))
                  (*(long **)(lVar3 + 0x30),puVar4,*(undefined8 *)(lVar3 + 0x38),
                   *(undefined8 *)(lVar3 + 0x40));
      }
      puVar4 = *(undefined8 **)(lVar3 + 8);
      *(undefined8 *)(lVar3 + 8) = 0;
      if (puVar4 != (undefined8 *)0x0) {
        pcVar2 = (code *)puVar4[1];
        if (pcVar2 != (code *)0x0) {
          puVar4[2] = 0;
          puVar4[3] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          (*pcVar2)(puVar4 + 4);
        }
        (**(code **)(**(long **)(lVar3 + 0x10) + 0x18))
                  (*(long **)(lVar3 + 0x10),puVar4,*(undefined8 *)(lVar3 + 0x18),
                   *(undefined8 *)(lVar3 + 0x20));
      }
      (**(code **)(**(long **)(lVar5 + -0x18) + 0x18))
                (*(long **)(lVar5 + -0x18),lVar3,*(undefined8 *)(lVar5 + -0x10),
                 *(undefined8 *)(lVar5 + -8));
    }
    lVar5 = param_1[2];
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d32d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar1,param_1[3] - lVar1,8);
  return;
}


