/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e37860; name: FUN_00e37860
 */


void FUN_00e37860(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = param_1[1];
  lVar2 = lVar4;
  if (lVar5 != lVar4) {
    puVar1 = PTR_DAT_02715de0 + 0x10;
    do {
      *(undefined **)(lVar5 + -0x110) = puVar1;
      plVar6 = (long *)(lVar5 + -0x108);
      if (*plVar6 == 0) {
        *plVar6 = 0;
        pcVar3 = *(code **)(lVar5 + -0x78);
      }
      else {
        FUN_006e2100();
        lVar2 = *plVar6;
        *plVar6 = 0;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        }
        pcVar3 = *(code **)(lVar5 + -0x78);
      }
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar5 + -0x70) = 0;
        *(undefined8 *)(lVar5 + -0x68) = 0;
        *(undefined8 *)(lVar5 + -0x80) = 0;
        *(undefined8 *)(lVar5 + -0x78) = 0;
        (*pcVar3)(lVar5 + -0x60);
      }
      pcVar3 = *(code **)(lVar5 + -0xf8);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar5 + -0xf0) = 0;
        *(undefined8 *)(lVar5 + -0xe8) = 0;
        *(undefined8 *)(lVar5 + -0x100) = 0;
        *(undefined8 *)(lVar5 + -0xf8) = 0;
        (*pcVar3)(lVar5 + -0xe0);
      }
      lVar5 = lVar5 + -0x210;
      if (*plVar6 != 0) {
        (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
        *plVar6 = 0;
      }
    } while (lVar4 != lVar5);
    lVar2 = *param_1;
  }
  param_1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00e37960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar2,param_1[2] - lVar2,0x10);
  return;
}


