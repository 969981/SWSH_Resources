/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c17d0; name: thunk_FUN_003c4490
 */


void thunk_FUN_003c4490(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 auStack_90 [9];
  undefined8 *puStack_48;
  
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  do {
    FUN_003c15e0(auStack_90,*puVar4);
    puStack_48 = puVar4;
    puVar2 = puVar4;
    puVar5 = auStack_90;
    while( true ) {
      while (puVar2 != (undefined8 *)0x0) {
        do {
          puVar5 = puVar2;
          lVar3 = puVar5[10];
          if (((lVar3 != 0) && (uVar1 = FUN_003c59f0(lVar3), (uVar1 & 1) != 0)) &&
             (uVar1 = FUN_003c52c0(lVar3), (uVar1 & 1) != 0)) {
            FUN_003c5a30(lVar3,*puVar5,param_2);
          }
          puVar2 = (undefined8 *)puVar5[8];
        } while ((undefined8 *)puVar5[8] != (undefined8 *)0x0);
        puVar2 = (undefined8 *)puVar5[9];
      }
      puVar5 = (undefined8 *)puVar5[7];
      if (puVar5 == (undefined8 *)0x0) break;
      puVar2 = (undefined8 *)puVar5[9];
    }
    puVar4 = (undefined8 *)puVar4[6];
  } while (puVar4 != (undefined8 *)0x0);
  return;
}


