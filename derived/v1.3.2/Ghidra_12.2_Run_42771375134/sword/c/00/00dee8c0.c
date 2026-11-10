/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dee8c0; name: FUN_00dee8c0
 */


void FUN_00dee8c0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  if (*(int *)(param_1 + 0x9c) != 3) {
    if (*(char *)(param_1 + 0xe3) == '\0') {
      if ((*(uint *)(param_1 + 0xf8) < 6) &&
         ((1 << (ulong)(*(uint *)(param_1 + 0xf8) & 0x1f) & 0x25U) != 0)) {
        plVar2 = *(long **)(param_1 + 0x70);
        FUN_006cf0a0(auStack_40,&DAT_02653808);
        (**(code **)(*plVar2 + 400))(plVar2,auStack_40,1);
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
          local_28 = 0;
        }
        FUN_006cf0a0(auStack_40,&DAT_026537f0);
        (**(code **)(*plVar2 + 400))(plVar2,auStack_40,5);
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        }
      }
      else {
        FUN_00deec30(param_1,0);
      }
    }
    else {
      lVar1 = FUN_00df0fc0(*(long *)(param_1 + 0x70) + 0x50);
      if ((lVar1 != 0) && (*(int *)(param_1 + 0xf8) != 1)) {
        FUN_00eaa260(lVar1,8);
      }
    }
    *(undefined4 *)(param_1 + 0x9c) = 3;
  }
  return;
}


