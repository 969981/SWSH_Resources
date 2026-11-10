/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01476500; name: FUN_01476500
 */


void FUN_01476500(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x100;
  lVar2 = FUN_00ffda40(lVar1,&DAT_0216df80 +
                             (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x10) * 0x28);
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(lVar2 + 0xe0) = 0xcbf29ce484222645;
    return;
  }
  *(undefined8 *)(lVar2 + 0xe0) =
       *(undefined8 *)(&DAT_0216df90 + (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x10) * 0x28);
  FUN_00ffd600(lVar1,&UNK_0216df98 + (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x10) * 0x28);
  FUN_00ffd510(lVar1,&UNK_0216df98 + (ulong)*(uint *)(*(long *)(param_1 + 0x5d0) + 0x10) * 0x28);
  return;
}


