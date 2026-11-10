/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbb220; name: FUN_00dbb220
 */


void FUN_00dbb220(long *param_1)

{
  undefined8 *puVar1;
  size_t __n;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  puVar6 = (undefined8 *)param_1[0x1c];
  puVar1 = (undefined8 *)param_1[0x1d];
  if (puVar6 != puVar1) {
    do {
      puVar5 = puVar6 + 1;
      (**(code **)(*(long *)*puVar6 + 0xf0))();
      puVar6 = puVar5;
    } while (puVar1 != puVar5);
    puVar6 = (undefined8 *)param_1[0x1c];
    if ((undefined8 *)param_1[0x1d] != puVar6) {
      uVar7 = 0;
      do {
        while ((*(char *)((long)param_1 + 0x44) == '\0' ||
               (uVar3 = (**(code **)(*(long *)*puVar6 + 0xf8))(), (uVar3 & 1) == 0))) {
          plVar4 = (long *)(**(code **)(*(long *)*puVar6 + 0x18))((long *)*puVar6,param_1);
          uVar2 = (**(code **)(*plVar4 + 0x58))();
          uVar7 = uVar7 | uVar2 ^ 1;
          (**(code **)(*(long *)*puVar6 + 0xe8))();
          __n = param_1[0x1d] - (long)(puVar6 + 1);
          if (__n == 0) {
            param_1[0x1d] = (long)puVar6;
            goto joined_r0x00dbb300;
          }
          memmove(puVar6,puVar6 + 1,__n);
          param_1[0x1d] = (long)(puVar6 + ((long)__n >> 3));
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 != (undefined8 *)param_1[0x1d]);
joined_r0x00dbb300:
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00dbb334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x38))(param_1,1);
        return;
      }
    }
  }
  return;
}


