/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103cda0; name: FUN_0103cda0
 */


undefined8 FUN_0103cda0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  undefined8 local_18;
  
  uVar1 = FUN_012b4090(param_1 + 0x68);
  if ((uVar1 & 1) == 0) {
    return 0xcbf29ce484222645;
  }
  local_48 = 0x271ac17d884536c9;
  local_40 = "title";
  local_38 = 5;
  FUN_012b4250(auStack_30,param_1 + 0x68,&local_48);
  local_18 = 0;
  uVar2 = FUN_012b4b40(auStack_30,&local_18);
  return uVar2;
}


