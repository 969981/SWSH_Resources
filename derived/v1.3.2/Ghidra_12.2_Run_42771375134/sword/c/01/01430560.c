/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01430560; name: FUN_01430560
 */


void FUN_01430560(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar5)(puVar5);
    lVar2 = FUN_01410b60();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        uVar3 = FUN_0140ce50(puVar5 + -10);
        if (*(long *)(param_1 + 0x78) == 0) goto LAB_014305d8;
        goto LAB_014305c4;
      }
    }
  }
  uVar3 = FUN_0140ce50(0);
  if (*(long *)(param_1 + 0x78) != 0) {
LAB_014305c4:
    uVar4 = FUN_01416420(uVar3);
    FUN_014c7bf0(uVar4,0,*(undefined8 *)(param_1 + 0x78));
  }
LAB_014305d8:
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar4 = FUN_01416420(uVar3);
    FUN_014c7bf0(uVar4,1,*(undefined8 *)(param_1 + 0x80));
    if (*(long *)(param_1 + 0x80) != 0) goto LAB_01430618;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar4 = FUN_01416420(uVar3);
    FUN_014c7bf0(uVar4,1,*(undefined8 *)(param_1 + 0xa8));
  }
LAB_01430618:
  lVar2 = *(long *)(param_1 + 0x88);
  if ((lVar2 != 0) || (lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8), lVar2 != 0)) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar4 = FUN_01416420(uVar3);
  FUN_014c9030(uVar4,2,lVar2);
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar3 = FUN_01416420(uVar3);
    FUN_014c9030(uVar3,3,*(undefined8 *)(param_1 + 0xa0));
  }
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01430690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


