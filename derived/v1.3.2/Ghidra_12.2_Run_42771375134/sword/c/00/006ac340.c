/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ac340; name: FUN_006ac340
 */


bool FUN_006ac340(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)param_1[2];
  do {
    if (puVar2 == puVar1) {
      lVar4 = (**(code **)(*param_1 + 0x38))(param_1);
      return lVar4 != 0;
    }
    uVar3 = FUN_006ac340(*puVar2);
    puVar2 = puVar2 + 1;
  } while ((uVar3 & 1) == 0);
  return true;
}


