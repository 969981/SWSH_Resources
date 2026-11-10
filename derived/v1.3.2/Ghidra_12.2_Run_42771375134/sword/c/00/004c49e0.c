/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c49e0; name: FUN_004c49e0
 */


undefined8 FUN_004c49e0(long param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  
  bVar2 = *(byte *)(param_1 + 0x30);
  bVar4 = bVar2 & 0xfd;
  *(byte *)(param_1 + 0x30) = bVar4;
  if (*param_2 == -0x80) {
LAB_004c4b08:
    bVar4 = bVar4 | 4;
  }
  else {
    if (*param_2 == -0x70) {
      if (param_2[3] != '\0') {
        puVar3 = (undefined4 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x90);
        if (puVar3 != (undefined4 *)0x0) {
          uVar1 = *(undefined4 *)param_2;
          uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
          *puVar3 = 1;
          puVar3[1] = uVar1;
          *(undefined8 *)(puVar3 + 2) = uVar5;
                    /* WARNING: Subroutine does not return */
          memset(puVar3 + 4,0,0x80);
        }
        *(undefined8 *)(param_1 + 0x10) = 0;
        uVar5 = 0;
        goto LAB_004c4b1c;
      }
      goto LAB_004c4b08;
    }
    bVar4 = bVar2 | 7;
  }
  *(byte *)(param_1 + 0x30) = bVar4;
  uVar5 = 1;
LAB_004c4b1c:
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  return uVar5;
}


