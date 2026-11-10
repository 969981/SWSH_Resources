/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e4ab0; name: FUN_008e4ab0
 */


void FUN_008e4ab0(long param_1,char param_2,ushort param_3)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  *(char *)(param_1 + 0x33d) = param_2;
  *(ushort *)(param_1 + 0x87) = *(ushort *)(param_1 + 0x87) & 0xfeff | (param_3 & 1) << 8;
  uVar3 = FUN_0087f070(lVar4);
  FUN_0087df30(lVar4,param_2,0);
  FUN_008e0a20(param_1,1,1,*(undefined1 *)(param_1 + 0x298));
  FUN_008e4210(param_1);
  sVar1 = FUN_008ec470(*(undefined2 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x33d),0x22);
  if (sVar1 == 0) {
    sVar1 = 1;
  }
  *(short *)(param_1 + 0x33a) = sVar1;
  if ((param_2 == '\0') && (*(short *)(param_1 + 0x70) == 0x1ec)) {
    *(ushort *)(param_1 + 0x87) = *(ushort *)(param_1 + 0x87) & 0xffe0;
    uVar2 = FUN_0087cdb0(lVar4);
    *(undefined2 *)(param_1 + 0x338) = uVar2;
  }
  FUN_0087f0c0(lVar4,uVar3 & 1);
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008e4ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


