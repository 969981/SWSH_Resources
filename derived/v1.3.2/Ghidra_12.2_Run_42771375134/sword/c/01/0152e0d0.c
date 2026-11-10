/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152e0d0; name: FUN_0152e0d0
 */


void FUN_0152e0d0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = 0;
  puVar4 = (undefined8 *)(param_1 + 0x70);
  lVar5 = 0xa7;
  do {
    uVar1 = FUN_01457550();
    puVar2 = puVar4;
    if (*(byte *)(puVar4 + -2) - 4 < 2) {
LAB_0152e120:
      *puVar2 = uVar1;
    }
    else if (*(byte *)(puVar4 + -2) == 2) {
      puVar2 = (undefined8 *)(param_1 + lVar3 * 0x30 + 0x68);
      goto LAB_0152e120;
    }
    lVar3 = lVar3 + 1;
    puVar4 = puVar4 + 6;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return;
    }
  } while( true );
}


