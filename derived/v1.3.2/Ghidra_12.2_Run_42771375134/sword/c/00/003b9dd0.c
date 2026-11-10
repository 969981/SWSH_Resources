/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b9dd0; name: FUN_003b9dd0
 */


void FUN_003b9dd0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  ushort local_40 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_003c6850(param_1,param_2,2);
  *param_1 = (long)(PTR_DAT_02712760 + 0x10);
                    /* try { // try from 003b9e00 to 003b9e9b has its CatchHandler @ 003b9eac */
  lVar1 = FUN_003b4110(param_2);
  param_1[4] = lVar1;
  FUN_003b17c0(local_40);
  *(byte *)(param_1 + 5) = (byte)(local_40[0] >> 3) & 1;
  if ((local_40[0] >> 3 & 1) != 0) {
    lVar1 = *(long *)(*(long *)(param_1[2] + 0x48) + 0x808);
    FUN_003b19a0(&local_38,param_1[4]);
    puVar2 = (undefined4 *)
             (*(long *)(lVar1 + 8) + ((ulong)*(uint *)(param_1 + 3) & 0x1fffffff) * 0x18);
    *puVar2 = local_38;
    puVar2[1] = local_34;
    puVar2[2] = local_30;
    puVar2[3] = local_2c;
    puVar2[4] = local_28;
    puVar2[5] = local_24;
    *(undefined1 *)(lVar1 + 0x18) = 1;
    FUN_003c6b10(0,param_1,6,0);
  }
  return;
}


