/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00952250; name: FUN_00952250
 */


void FUN_00952250(undefined8 param_1,undefined1 *param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  
  *param_2 = 1;
  bVar2 = *param_3;
  if (bVar2 < 8) {
    FUN_00942390();
    FUN_00931930();
    cVar1 = FUN_00932760();
    if ((bVar2 - 1 < 4) && ((byte)(cVar1 - 5U) < 3)) {
      *param_2 = 2;
      return;
    }
    FUN_00942390(param_1);
    uVar4 = FUN_00931930();
    bVar2 = FUN_00932760();
    if ((bVar2 != *param_3) ||
       ((param_3[1] == 0xff && (iVar3 = FUN_00932780(uVar4), iVar3 != 0xff)))) {
      *param_2 = 0;
    }
  }
  return;
}


