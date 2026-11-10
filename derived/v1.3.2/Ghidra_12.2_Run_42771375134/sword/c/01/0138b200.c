/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138b200; name: FUN_0138b200
 */


void FUN_0138b200(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_2 + 0x68) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) {
    lVar4 = FUN_00c754c0(0,auStack_28);
  }
  else {
    puVar2 = (undefined8 *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar5 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar5;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (puVar2 == (undefined8 *)PTR_DAT_02715080) {
          puVar3 = puVar6 + -10;
          goto LAB_0138b280;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar3 = (undefined8 *)0x0;
    }
LAB_0138b280:
    lVar4 = FUN_00c754c0(puVar3,auStack_28);
  }
  if (lVar4 != 0) {
    local_30[0] = 1;
    local_2c = 0;
    FUN_0069d190(param_1,lVar4,local_30);
  }
  return;
}


