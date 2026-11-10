/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103c200; name: FUN_0103c200
 */


undefined8 FUN_0103c200(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  uVar1 = FUN_012b4090(param_1 + 0x170);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x68);
    if (lVar2 == 0) {
      return 0;
    }
    if (*(char *)(lVar2 + 0x170) == '\0') {
      return 0;
    }
    FUN_012b4da0(auStack_30,*(undefined8 *)(lVar2 + 400),*(undefined8 *)(lVar2 + 0x180));
    local_58 = 0xf5a481a8227490a3;
    local_50 = "tipsdata";
    local_48 = 8;
    FUN_012b4250(auStack_40,auStack_30,&local_58);
    FUN_012b4070(param_1 + 0x170,auStack_40);
  }
  return 1;
}


