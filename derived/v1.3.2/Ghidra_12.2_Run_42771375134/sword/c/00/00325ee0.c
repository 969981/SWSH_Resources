/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00325ee0; name: FUN_00325ee0
 */


void FUN_00325ee0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 auStack_158 [264];
  
  pbVar3 = (byte *)*param_3;
  uVar2 = (uint)*pbVar3;
  if (*pbVar3 != 0) {
    do {
      iVar1 = isspace(uVar2);
      if (iVar1 == 0) break;
      pbVar3 = pbVar3 + 1;
      uVar2 = (uint)*pbVar3;
    } while (uVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  memset(auStack_158,0,0x100);
}


