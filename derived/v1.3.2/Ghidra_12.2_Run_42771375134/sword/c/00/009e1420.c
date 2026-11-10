/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e1420; name: FUN_009e1420
 */


void FUN_009e1420(undefined1 param_1,uint param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long local_38;
  undefined2 local_28 [4];
  
  puVar1 = PTR_DAT_02718ad8;
  if (((param_2 & 0xff) != 5) &&
     (uVar2 = FUN_008fade0(*(undefined8 *)PTR_DAT_02718ad8), (uVar2 & 1) != 0)) {
    uVar2 = FUN_008f80c0(*(undefined8 *)puVar1,param_2);
    if ((uVar2 & 1) == 0) {
      FUN_008f80e0(&local_38,*(undefined8 *)puVar1,param_2);
      FUN_014c9030(*(undefined8 *)(puVar1 + 0x10),param_1,local_38);
    }
    else {
      FUN_008fb010(&local_38,*(undefined8 *)puVar1,param_2,local_28);
      FUN_014c7980(*(undefined8 *)(puVar1 + 0x10),param_1,local_38,local_28[0],0);
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


