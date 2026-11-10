/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119d8b0; name: FUN_0119d8b0
 */


void FUN_0119d8b0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x360) == '\0') {
    *(undefined8 *)(param_1 + 0x368) = *param_2;
    *(undefined8 *)(param_1 + 0x370) = param_2[1];
    *(undefined8 *)(param_1 + 0x378) = param_2[2];
    lVar2 = param_2[3];
    *(long *)(param_1 + 0x380) = lVar2;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    *(undefined1 *)(param_1 + 0x360) = 1;
  }
  else {
    *(undefined8 *)(param_1 + 0x368) = *param_2;
    *(undefined8 *)(param_1 + 0x370) = param_2[1];
    *(undefined8 *)(param_1 + 0x378) = param_2[2];
    lVar2 = param_2[3];
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar1 = *(long *)(param_1 + 0x380);
    *(long *)(param_1 + 0x380) = lVar2;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0119d914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


