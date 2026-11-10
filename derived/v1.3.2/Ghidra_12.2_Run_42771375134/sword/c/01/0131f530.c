/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131f530; name: FUN_0131f530
 */


void FUN_0131f530(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar6 = *(long *)(param_2 + 0x58);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(long *)(param_1 + 8) = lVar6;
  if ((*(long *)(param_2 + 0x68) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar5 == (undefined8 *)0x0)) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)*puVar5)(puVar5);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar4 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar4;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (puVar2 == (undefined8 *)PTR_DAT_02715080) {
          puVar3 = puVar5 + -10;
          goto LAB_0131f5d4;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar3 = (undefined8 *)0x0;
    }
  }
LAB_0131f5d4:
  lVar6 = FUN_007959b0(puVar3,&local_50);
  lVar6 = *(long *)(lVar6 + 0x350);
  local_50 = 0x113052c096300d8;
  local_48 = "EffHeadCenter01";
  local_40 = 0xf;
  local_38 = 0;
  iVar1 = FUN_00722fb0(lVar6,&local_50);
  if (iVar1 < 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else {
    *(long *)(param_1 + 0x60) = *(long *)(lVar6 + 0x1b8) + (long)iVar1 * 0x130;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


