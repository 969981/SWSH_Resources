/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002af560; name: FUN_002af560
 */


/* WARNING: Removing unreachable block (ram,0x002af5b4) */

void FUN_002af560(long param_1,uint param_2,ulong param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  
  (**(code **)*param_4)(param_4,param_1,param_2 << 1);
  if ((param_2 != 0) && ((param_3 & 1) != 0)) {
    if (param_2 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      puVar4 = (undefined1 *)(param_1 + 3);
      do {
        uVar1 = puVar4[-3];
        lVar3 = lVar3 + 2;
        uVar2 = puVar4[-1];
        puVar4[-3] = puVar4[-2];
        puVar4[-2] = uVar1;
        puVar4[-1] = *puVar4;
        *puVar4 = uVar2;
        puVar4 = puVar4 + 4;
      } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar3);
      if ((param_2 & 1) == 0) {
        return;
      }
    }
    puVar4 = (undefined1 *)(param_1 + lVar3 * 2);
    uVar1 = *puVar4;
    *puVar4 = puVar4[1];
    puVar4[1] = uVar1;
  }
  return;
}


