/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011439b0; name: FUN_011439b0
 */


void FUN_011439b0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 local_28;
  
  if (((((*(uint *)PTR_DAT_02724c60 != param_2) && (*(uint *)(PTR_DAT_02724c60 + 4) != param_2)) &&
       (*(uint *)(PTR_DAT_02724c60 + 8) != param_2)) &&
      ((((*(uint *)(PTR_DAT_02724c60 + 0xc) != param_2 &&
         (*(uint *)(PTR_DAT_02724c60 + 0x10) != param_2)) &&
        ((*(uint *)(PTR_DAT_02724c60 + 0x14) != param_2 &&
         ((*(uint *)(PTR_DAT_02724c60 + 0x18) != param_2 &&
          (*(uint *)(PTR_DAT_02724c60 + 0x1c) != param_2)))))) &&
       (*(uint *)(PTR_DAT_02724c60 + 0x20) != param_2)))) &&
     (((*(uint *)(PTR_DAT_02724c60 + 0x24) != param_2 &&
       (*(uint *)(PTR_DAT_02724c60 + 0x28) != param_2)) &&
      (*(uint *)(PTR_DAT_02724c60 + 0x2c) != param_2)))) {
    return;
  }
  *(byte *)(*(long *)(param_1 + 0x5d0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5d0) + 0x58) | 1;
  puVar2 = PTR_DAT_02724c68;
  param_1 = param_1 + 0x100;
  FUN_00ffd010(param_1,PTR_DAT_02724c68);
  FUN_00ffd510((float)param_2,param_1,puVar2);
  puVar1 = (undefined8 *)PTR_DAT_02724c70;
  if (param_2 < 0xb) {
    puVar1 = (undefined8 *)PTR_DAT_02724c78;
  }
  local_28 = *puVar1;
  FUN_00ffd010(param_1,&local_28);
  return;
}


