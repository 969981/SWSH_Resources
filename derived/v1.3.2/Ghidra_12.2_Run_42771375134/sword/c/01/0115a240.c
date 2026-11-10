/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115a240; name: FUN_0115a240
 */


void FUN_0115a240(long param_1)

{
  long lVar1;
  
  *(byte *)(*(long *)(param_1 + 0x730) + 0x58) = *(byte *)(*(long *)(param_1 + 0x730) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x740) + 0x58) = *(byte *)(*(long *)(param_1 + 0x740) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x738) + 0x58) = *(byte *)(*(long *)(param_1 + 0x738) + 0x58) & 0xfe
  ;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x100);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x108);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x110);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x118);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x120);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x128);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x130);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x138);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x140);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x148);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x150);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x158);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x160);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x168);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x170);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x178);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x180);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x188);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 400);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  lVar1 = *(long *)(*(long *)(param_1 + 0x708) + 0x198);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  if ((*(char *)(param_1 + 0x748) == '\0') || (*(char *)(param_1 + 0x749) != '\x02')) {
    return;
  }
  FUN_01159840(param_1,0);
  FUN_00ffdc80(param_1 + 0x100,"grid_VSSorting");
  FUN_016b2eb0();
  return;
}


