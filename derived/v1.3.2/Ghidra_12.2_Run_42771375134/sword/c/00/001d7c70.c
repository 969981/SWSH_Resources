/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d7c70; name: FUN_001d7c70
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_001d7c70(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ushort local_38 [4];
  
  puVar1 = param_1 + 3;
  FUN_003c14f0(puVar1,param_1 + 0xe,(long)param_1 + 0x7c);
  uVar2 = *(uint *)(param_1 + 1);
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 3) & 1;
  if ((uVar2 & 0xffffff) != 0) {
    puVar3 = (undefined8 *)param_1[2];
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_001d1a00(*param_1,uVar2 >> 0x18 & 0xf);
      param_1[2] = puVar3;
    }
    if ((uVar2 & 1) != 0) {
      FUN_003c1510(puVar1,*puVar3,*(undefined8 *)((long)puVar3 + 8));
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_003c1540(*(undefined4 *)((long)puVar3 + 0x10),*(undefined4 *)((long)puVar3 + 0x14),puVar1)
      ;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      FUN_003c1580(*(undefined4 *)((long)puVar3 + 0x1c),puVar1);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      local_38[0] = *(ushort *)(param_1 + 0x11) | *(ushort *)((long)puVar3 + 0x18);
      FUN_003c1490(puVar1,local_38);
    }
  }
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xff000000;
  return;
}


