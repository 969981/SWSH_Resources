/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144ce20; name: FUN_0144ce20
 */


undefined8 FUN_0144ce20(long param_1)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (0 < *(int *)(param_1 + 0x3dc)) {
    lVar4 = 0;
    do {
      pcVar1 = (char *)FUN_0152d900(lVar2,*(undefined4 *)(param_1 + 0x140 + lVar4 * 4));
      if (*pcVar1 == '\x03') {
        uVar3 = 1;
        if (lVar2 == 0) {
          return 1;
        }
        goto LAB_0144ce9c;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x3dc));
  }
  uVar3 = 0;
  if (lVar2 != 0) {
LAB_0144ce9c:
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return uVar3;
}


