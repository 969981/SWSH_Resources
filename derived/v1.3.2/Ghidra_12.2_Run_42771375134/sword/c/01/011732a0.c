/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011732a0; name: FUN_011732a0
 */


void FUN_011732a0(undefined1 *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if (*(long *)PTR_DAT_027104b0 != 0) {
    lVar2 = FUN_007b5710();
    if (*(long *)(lVar2 + 0x48) != 0) {
      puVar6 = *(undefined8 **)(lVar2 + 0x40);
      iVar5 = 0;
      uVar3 = 0;
      uVar4 = 0;
      lVar2 = *(long *)(lVar2 + 0x48) << 3;
      do {
        while (cVar1 = FUN_007b5850(*puVar6), cVar1 != '\x01') {
          if (cVar1 == '\0') {
            uVar4 = *puVar6;
            iVar5 = iVar5 + 1;
          }
          puVar6 = puVar6 + 1;
          lVar2 = lVar2 + -8;
          if (lVar2 == 0) goto LAB_01173334;
        }
        uVar3 = *puVar6;
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
LAB_01173334:
      *param_1 = 0;
      if (iVar5 == 2) {
        *(undefined8 *)(param_1 + 8) = uVar4;
        *(undefined8 *)(param_1 + 0x10) = uVar3;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *param_1 = 1;
        return;
      }
      return;
    }
  }
  *param_1 = 0;
  return;
}


