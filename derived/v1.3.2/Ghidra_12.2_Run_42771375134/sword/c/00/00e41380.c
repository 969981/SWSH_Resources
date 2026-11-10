/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e41380; name: FUN_00e41380
 */


void FUN_00e41380(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  
  if ((*(long *)(param_1 + 0x4e0) != 0) &&
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x4e0) + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    if (((*PTR_DAT_0271ed88 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ed88), iVar1 != 0)) {
      uVar3 = FUN_0156b190();
      *(undefined8 *)PTR_DAT_0271ed90 = uVar3;
      __cxa_guard_release(PTR_DAT_0271ed88);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_0271ed90) {
        if (*(char *)((long)puVar5 + 0x1ca) == '\0') {
          bVar4 = *(byte *)((long)puVar5 + 0x489) ^ 1;
        }
        else {
          bVar4 = 1;
        }
        *(byte *)(param_1 + 0x21a) = bVar4;
        break;
      }
    }
  }
  FUN_00db6d80(param_1,param_2,param_3);
  return;
}


