/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e46320; name: FUN_00e46320
 */


bool FUN_00e46320(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *(long *)(param_1 + 0x588);
  if (lVar5 == 0) {
    return false;
  }
  plVar6 = (long *)(lVar5 + 0x48);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  puVar4 = *(undefined8 **)(lVar5 + 0x60);
  if (puVar4 != (undefined8 *)0x0) {
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar5 = FUN_0156b190();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar5) {
        puVar4 = puVar4 + -10;
        goto LAB_00e4639c;
      }
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_00e4639c:
  (**(code **)(*plVar6 + 0x18))(plVar6);
  if (puVar4 == (undefined8 *)0x0) {
    return false;
  }
  plVar6 = (long *)(**(code **)puVar4[10])(puVar4 + 10);
  if (((*PTR_DAT_0271ecf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ecf8), iVar1 != 0))
  {
    uVar3 = FUN_0156b190();
    *(undefined8 *)PTR_DAT_0271ed00 = uVar3;
    __cxa_guard_release(PTR_DAT_0271ecf8);
  }
  for (; plVar6 != (long *)PTR_DAT_0271ed00; plVar6 = (long *)*plVar6) {
  }
  return *(char *)(puVar4 + 0x9d) != '\0';
}


