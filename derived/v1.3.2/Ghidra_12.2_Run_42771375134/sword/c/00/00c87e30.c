/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c87e30; name: FUN_00c87e30
 */


void FUN_00c87e30(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((*(long *)(param_1 + 0x108) != 0) && (*(char *)(param_1 + 0x128) != '\0')) {
    uVar1 = FUN_00c7d7b0(*(undefined8 *)(param_1 + 0xa0));
    uVar5 = *(undefined8 *)(param_1 + 0x108);
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_00c76dc0(uVar2,param_2,uVar1,uVar5);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    puVar4 = *(undefined8 **)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x140) = uVar2;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      (**(code **)(**(long **)(param_1 + 0x148) + 0x18))
                (*(long **)(param_1 + 0x148),puVar4,*(undefined8 *)(param_1 + 0x150),
                 *(undefined8 *)(param_1 + 0x158));
    }
    *(long **)(param_1 + 0x148) = param_2;
    *(undefined8 *)(param_1 + 0x150) = 0x80;
    *(undefined8 *)(param_1 + 0x158) = 8;
    local_60 = 0x95b72ef4b7ce596c;
    local_58 = "to_eye_blink01";
    uStack_50 = 0xe;
    local_48 = 0;
    FUN_00c88ef0(param_1,param_2,&local_60);
    local_80 = 0x95b731f4b7ce5e85;
    local_68 = 0;
    local_78 = "to_eye_blink02";
    uStack_70 = 0xe;
    FUN_00c88ef0(param_1,param_2,&local_80);
    local_a0 = 0x95b730f4b7ce5cd2;
    local_88 = 0;
    local_98 = "to_eye_blink03";
    uStack_90 = 0xe;
    FUN_00c88ef0(param_1,param_2,&local_a0);
  }
  return;
}


