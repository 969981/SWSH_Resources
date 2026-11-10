/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f8890; name: FUN_004f8890
 */


undefined4 * FUN_004f8890(undefined4 param_1,void *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00404690(*(undefined4 *)PTR_DAT_027137c8,0x38);
  if (puVar2 != (undefined4 *)0x0) {
    bVar1 = *(byte *)(puVar2 + 0xd) & 0xfc;
    *(byte *)(puVar2 + 0xd) = *(byte *)(puVar2 + 0xd) & 0xfe;
    if (param_2 == (void *)0x0) {
      *(byte *)(puVar2 + 0xd) = bVar1;
    }
    else {
      *(byte *)(puVar2 + 0xd) = bVar1 | 2;
      memcpy(puVar2 + 2,param_2,0x24);
    }
    *puVar2 = param_1;
    puVar2[0xc] = param_3;
  }
  return puVar2;
}


