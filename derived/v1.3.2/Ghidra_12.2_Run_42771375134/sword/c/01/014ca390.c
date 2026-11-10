/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ca390; name: FUN_014ca390
 */


void FUN_014ca390(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  
  *(undefined4 *)(param_1 + 0x78) = 0;
  lVar3 = *(long *)PTR_DAT_02710ac0;
  *(long **)(lVar3 + 0x10) = param_2;
  *(undefined8 *)(lVar3 + 0x20) = 0x100000;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x100000,8);
  *(long *)(lVar3 + 0x18) = lVar1;
  if (lVar1 == 0) {
    (**(code **)(**(long **)(lVar3 + 0x10) + 0xb8))();
    lVar1 = *(long *)(lVar3 + 0x18);
  }
  FUN_00760770(lVar1,lVar1 + 0xb8,0xfff48,0);
  *(long *)(lVar3 + 8) = lVar1;
  *(long *)(param_1 + 0x2b40) = lVar1;
  local_80 = 0xb4cc9d0257902b6e;
  local_78 = "common/itemname.dat";
  local_70 = 0x13;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2b60) != 0) && (*(long *)(param_1 + 0x2b48) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2b48) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2b48) = 0;
  }
  *(undefined8 *)(param_1 + 0x2b48) = 0;
  *(undefined8 *)(param_1 + 0x2b50) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2b58) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2b60) = 0;
  if (*(long *)(param_1 + 0x2b68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2b68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2b68) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2b50) = local_58;
  *(undefined1 **)(param_1 + 0x2b58) = local_50;
  *(long *)(param_1 + 0x2b60) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2b68) = lVar1;
  *(undefined4 *)(param_1 + 0x2b70) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2b48) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2b48) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2b48) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x2b0af70209c60ca5;
  local_78 = "common/itemname.tbl";
  local_70 = 0x13;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2b90) != 0) && (*(long *)(param_1 + 0x2b78) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2b78) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2b78) = 0;
  }
  *(undefined8 *)(param_1 + 0x2b78) = 0;
  *(undefined8 *)(param_1 + 0x2b80) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2b88) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2b90) = 0;
  if (*(long *)(param_1 + 0x2b98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2b98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2b98) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2b80) = local_58;
  *(undefined1 **)(param_1 + 0x2b88) = local_50;
  *(long *)(param_1 + 0x2b90) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2b98) = lVar1;
  *(undefined4 *)(param_1 + 0x2ba0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2b78) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2b78) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2b78) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x41655414cfbef75c;
  local_78 = "common/wazaname.dat";
  local_70 = 0x13;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2bc0) != 0) && (*(long *)(param_1 + 0x2ba8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2ba8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2ba8) = 0;
  }
  *(undefined8 *)(param_1 + 0x2ba8) = 0;
  *(undefined8 *)(param_1 + 0x2bb0) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2bb8) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2bc0) = 0;
  if (*(long *)(param_1 + 0x2bc8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2bc8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2bc8) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2bb0) = local_58;
  *(undefined1 **)(param_1 + 0x2bb8) = local_50;
  *(long *)(param_1 + 0x2bc0) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2bc8) = lVar1;
  *(undefined4 *)(param_1 + 0x2bd0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2ba8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2ba8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2ba8) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xb524be147fd5f8df;
  local_78 = "common/wazaname.tbl";
  local_70 = 0x13;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2bf0) != 0) && (*(long *)(param_1 + 0x2bd8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2bd8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2bd8) = 0;
  }
  *(undefined8 *)(param_1 + 0x2bd8) = 0;
  *(undefined8 *)(param_1 + 0x2be0) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2be8) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2bf0) = 0;
  if (*(long *)(param_1 + 0x2bf8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2bf8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2bf8) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2be0) = local_58;
  *(undefined1 **)(param_1 + 0x2be8) = local_50;
  *(long *)(param_1 + 0x2bf0) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2bf8) = lVar1;
  *(undefined4 *)(param_1 + 0x2c00) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2bd8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2bd8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2bd8) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x6db944fd9c30dde5;
  local_78 = "common/typename.dat";
  local_70 = 0x13;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2c20) != 0) && (*(long *)(param_1 + 0x2c08) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2c08) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2c08) = 0;
  }
  *(undefined8 *)(param_1 + 0x2c08) = 0;
  *(undefined8 *)(param_1 + 0x2c10) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2c18) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2c20) = 0;
  if (*(long *)(param_1 + 0x2c28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2c28) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2c28) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2c10) = local_58;
  *(undefined1 **)(param_1 + 0x2c18) = local_50;
  *(long *)(param_1 + 0x2c20) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2c28) = lVar1;
  *(undefined4 *)(param_1 + 0x2c30) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2c08) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2c08) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2c08) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xf77aeafde9fafcae;
  local_78 = "common/typename.tbl";
  local_70 = 0x13;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2c50) != 0) && (*(long *)(param_1 + 0x2c38) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2c38) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2c38) = 0;
  }
  *(undefined8 *)(param_1 + 0x2c38) = 0;
  *(undefined8 *)(param_1 + 0x2c40) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2c48) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2c50) = 0;
  if (*(long *)(param_1 + 0x2c58) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2c58) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2c58) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2c40) = local_58;
  *(undefined1 **)(param_1 + 0x2c48) = local_50;
  *(long *)(param_1 + 0x2c50) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2c58) = lVar1;
  *(undefined4 *)(param_1 + 0x2c60) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2c38) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2c38) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2c38) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x1d4603fdfbcbfc24;
  local_78 = "common/tokusei.dat";
  local_70 = 0x12;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2c80) != 0) && (*(long *)(param_1 + 0x2c68) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2c68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2c68) = 0;
  }
  *(undefined8 *)(param_1 + 0x2c68) = 0;
  *(undefined8 *)(param_1 + 0x2c70) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2c78) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2c80) = 0;
  if (*(long *)(param_1 + 0x2c88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2c88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2c88) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2c70) = local_58;
  *(undefined1 **)(param_1 + 0x2c78) = local_50;
  *(long *)(param_1 + 0x2c80) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2c88) = lVar1;
  *(undefined4 *)(param_1 + 0x2c90) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2c68) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2c68) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2c68) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x91055dfdabe2e277;
  local_78 = "common/tokusei.tbl";
  local_70 = 0x12;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2cb0) != 0) && (*(long *)(param_1 + 0x2c98) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2c98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2c98) = 0;
  }
  *(undefined8 *)(param_1 + 0x2c98) = 0;
  *(undefined8 *)(param_1 + 0x2ca0) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2ca8) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2cb0) = 0;
  if (*(long *)(param_1 + 0x2cb8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2cb8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2cb8) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2ca0) = local_58;
  *(undefined1 **)(param_1 + 0x2ca8) = local_50;
  *(long *)(param_1 + 0x2cb0) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2cb8) = lVar1;
  *(undefined4 *)(param_1 + 0x2cc0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2c98) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2c98) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2c98) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xad357db753d6f73;
  local_78 = "common/seikaku.dat";
  local_70 = 0x12;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2ce0) != 0) && (*(long *)(param_1 + 0x2cc8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2cc8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2cc8) = 0;
  }
  *(undefined8 *)(param_1 + 0x2cc8) = 0;
  *(undefined8 *)(param_1 + 0x2cd0) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2cd8) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2ce0) = 0;
  if (*(long *)(param_1 + 0x2ce8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2ce8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2ce8) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2cd0) = local_58;
  *(undefined1 **)(param_1 + 0x2cd8) = local_50;
  *(long *)(param_1 + 0x2ce0) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2ce8) = lVar1;
  *(undefined4 *)(param_1 + 0x2cf0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2cc8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2cc8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2cc8) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x7da4bddb248a1d60;
  local_78 = "common/seikaku.tbl";
  local_70 = 0x12;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2d10) != 0) && (*(long *)(param_1 + 0x2cf8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2cf8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2cf8) = 0;
  }
  *(undefined8 *)(param_1 + 0x2cf8) = 0;
  *(undefined8 *)(param_1 + 0x2d00) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2d08) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2d10) = 0;
  if (*(long *)(param_1 + 0x2d18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2d18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2d18) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2d00) = local_58;
  *(undefined1 **)(param_1 + 0x2d08) = local_50;
  *(long *)(param_1 + 0x2d10) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2d18) = lVar1;
  *(undefined4 *)(param_1 + 0x2d20) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2cf8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2cf8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2cf8) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xb059dd7e20c2c317;
  local_78 = "script/place_name.dat";
  local_70 = 0x15;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2d40) != 0) && (*(long *)(param_1 + 0x2d28) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2d28) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2d28) = 0;
  }
  *(undefined8 *)(param_1 + 0x2d28) = 0;
  *(undefined8 *)(param_1 + 0x2d30) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2d38) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2d40) = 0;
  if (*(long *)(param_1 + 0x2d48) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2d48) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2d48) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2d30) = local_58;
  *(undefined1 **)(param_1 + 0x2d38) = local_50;
  *(long *)(param_1 + 0x2d40) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2d48) = lVar1;
  *(undefined4 *)(param_1 + 0x2d50) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2d28) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2d28) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2d28) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x276b537dd3ac58f4;
  local_78 = "script/place_name.tbl";
  local_70 = 0x15;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2d70) != 0) && (*(long *)(param_1 + 0x2d58) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2d58) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2d58) = 0;
  }
  *(undefined8 *)(param_1 + 0x2d58) = 0;
  *(undefined8 *)(param_1 + 0x2d60) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2d68) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2d70) = 0;
  if (*(long *)(param_1 + 0x2d78) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2d78) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2d78) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2d60) = local_58;
  *(undefined1 **)(param_1 + 0x2d68) = local_50;
  *(long *)(param_1 + 0x2d70) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2d78) = lVar1;
  *(undefined4 *)(param_1 + 0x2d80) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2d58) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2d58) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2d58) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xd6d1a9fe944dcd2b;
  local_78 = "common/trname.dat";
  local_70 = 0x11;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2da0) != 0) && (*(long *)(param_1 + 0x2d88) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2d88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2d88) = 0;
  }
  *(undefined8 *)(param_1 + 0x2d88) = 0;
  *(undefined8 *)(param_1 + 0x2d90) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2d98) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2da0) = 0;
  if (*(long *)(param_1 + 0x2da8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2da8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2da8) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2d90) = local_58;
  *(undefined1 **)(param_1 + 0x2d98) = local_50;
  *(long *)(param_1 + 0x2da0) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2da8) = lVar1;
  *(undefined4 *)(param_1 + 0x2db0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2d88) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2d88) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2d88) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x4de31ffe47376308;
  local_78 = "common/trname.tbl";
  local_70 = 0x11;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2dd0) != 0) && (*(long *)(param_1 + 0x2db8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2db8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2db8) = 0;
  }
  *(undefined8 *)(param_1 + 0x2db8) = 0;
  *(undefined8 *)(param_1 + 0x2dc0) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2dc8) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2dd0) = 0;
  if (*(long *)(param_1 + 0x2dd8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2dd8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2dd8) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2dc0) = local_58;
  *(undefined1 **)(param_1 + 0x2dc8) = local_50;
  *(long *)(param_1 + 0x2dd0) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2dd8) = lVar1;
  *(undefined4 *)(param_1 + 0x2de0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2db8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2db8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2db8) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xaecff13bebdf63e3;
  local_78 = "common/bag_pocket.dat";
  local_70 = 0x15;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2e00) != 0) && (*(long *)(param_1 + 0x2de8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2de8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2de8) = 0;
  }
  *(undefined8 *)(param_1 + 0x2de8) = 0;
  *(undefined8 *)(param_1 + 0x2df0) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2df8) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2e00) = 0;
  if (*(long *)(param_1 + 0x2e08) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2e08) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2e08) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2df0) = local_58;
  *(undefined1 **)(param_1 + 0x2df8) = local_50;
  *(long *)(param_1 + 0x2e00) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2e08) = lVar1;
  *(undefined4 *)(param_1 + 0x2e10) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2de8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2de8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2de8) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x3bea973c3c822150;
  local_78 = "common/bag_pocket.tbl";
  local_70 = 0x15;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2e30) != 0) && (*(long *)(param_1 + 0x2e18) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2e18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2e18) = 0;
  }
  *(undefined8 *)(param_1 + 0x2e18) = 0;
  *(undefined8 *)(param_1 + 0x2e20) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2e28) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2e30) = 0;
  if (*(long *)(param_1 + 0x2e38) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2e38) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2e38) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2e20) = local_58;
  *(undefined1 **)(param_1 + 0x2e28) = local_50;
  *(long *)(param_1 + 0x2e30) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2e38) = lVar1;
  *(undefined4 *)(param_1 + 0x2e40) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2e18) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2e18) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2e18) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x66fe45b25b2ddbbb;
  local_78 = "common/itemname_plural.dat";
  local_70 = 0x1a;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2e60) != 0) && (*(long *)(param_1 + 0x2e48) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2e48) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2e48) = 0;
  }
  *(undefined8 *)(param_1 + 0x2e48) = 0;
  *(undefined8 *)(param_1 + 0x2e50) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2e58) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2e60) = 0;
  if (*(long *)(param_1 + 0x2e68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2e68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2e68) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2e50) = local_58;
  *(undefined1 **)(param_1 + 0x2e58) = local_50;
  *(long *)(param_1 + 0x2e60) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2e68) = lVar1;
  *(undefined4 *)(param_1 + 0x2e70) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2e48) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2e48) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2e48) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xf33ebbb2ab16a3d8;
  local_78 = "common/itemname_plural.tbl";
  local_70 = 0x1a;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2e90) != 0) && (*(long *)(param_1 + 0x2e78) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2e78) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2e78) = 0;
  }
  *(undefined8 *)(param_1 + 0x2e78) = 0;
  *(undefined8 *)(param_1 + 0x2e80) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2e88) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2e90) = 0;
  if (*(long *)(param_1 + 0x2e98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2e98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2e98) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2e80) = local_58;
  *(undefined1 **)(param_1 + 0x2e88) = local_50;
  *(long *)(param_1 + 0x2e90) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2e98) = lVar1;
  *(undefined4 *)(param_1 + 0x2ea0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2e78) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2e78) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2e78) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x405425fc16f32062;
  local_78 = "common/itemname_classified.dat";
  local_70 = 0x1e;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2ec0) != 0) && (*(long *)(param_1 + 0x2ea8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2ea8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2ea8) = 0;
  }
  *(undefined8 *)(param_1 + 0x2ea8) = 0;
  *(undefined8 *)(param_1 + 0x2eb0) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2eb8) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2ec0) = 0;
  if (*(long *)(param_1 + 0x2ec8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2ec8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2ec8) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2eb0) = local_58;
  *(undefined1 **)(param_1 + 0x2eb8) = local_50;
  *(long *)(param_1 + 0x2ec0) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2ec8) = lVar1;
  *(undefined4 *)(param_1 + 0x2ed0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2ea8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2ea8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2ea8) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xcc9bcffc66e25f89;
  local_78 = "common/itemname_classified.tbl";
  local_70 = 0x1e;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2ef0) != 0) && (*(long *)(param_1 + 0x2ed8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2ed8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2ed8) = 0;
  }
  *(undefined8 *)(param_1 + 0x2ed8) = 0;
  *(undefined8 *)(param_1 + 12000) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2ee8) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2ef0) = 0;
  if (*(long *)(param_1 + 0x2ef8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2ef8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2ef8) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 12000) = local_58;
  *(undefined1 **)(param_1 + 0x2ee8) = local_50;
  *(long *)(param_1 + 0x2ef0) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2ef8) = lVar1;
  *(undefined4 *)(param_1 + 0x2f00) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2ed8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2ed8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2ed8) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x914e4c5f68d6e6d;
  local_78 = "common/itemname_plural_classified.dat";
  local_70 = 0x25;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2f20) != 0) && (*(long *)(param_1 + 0x2f08) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2f08) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2f08) = 0;
  }
  *(undefined8 *)(param_1 + 0x2f08) = 0;
  *(undefined8 *)(param_1 + 0x2f10) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2f18) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2f20) = 0;
  if (*(long *)(param_1 + 0x2f28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2f28) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2f28) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2f10) = local_58;
  *(undefined1 **)(param_1 + 0x2f18) = local_50;
  *(long *)(param_1 + 0x2f20) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2f28) = lVar1;
  *(undefined4 *)(param_1 + 0x2f30) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2f08) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2f08) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2f08) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x80333ac5a9815846;
  local_78 = "common/itemname_plural_classified.tbl";
  local_70 = 0x25;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2f50) != 0) && (*(long *)(param_1 + 0x2f38) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2f38) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2f38) = 0;
  }
  *(undefined8 *)(param_1 + 0x2f38) = 0;
  *(undefined8 *)(param_1 + 0x2f40) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2f48) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2f50) = 0;
  if (*(long *)(param_1 + 0x2f58) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2f58) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2f58) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2f40) = local_58;
  *(undefined1 **)(param_1 + 0x2f48) = local_50;
  *(long *)(param_1 + 0x2f50) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2f58) = lVar1;
  *(undefined4 *)(param_1 + 0x2f60) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2f38) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2f38) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2f38) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x8fdfb282ee289b08;
  local_78 = "common/itemname_acc.dat";
  local_70 = 0x17;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2f80) != 0) && (*(long *)(param_1 + 0x2f68) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2f68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2f68) = 0;
  }
  *(undefined8 *)(param_1 + 0x2f68) = 0;
  *(undefined8 *)(param_1 + 0x2f70) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2f78) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2f80) = 0;
  if (*(long *)(param_1 + 0x2f88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2f88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2f88) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2f70) = local_58;
  *(undefined1 **)(param_1 + 0x2f78) = local_50;
  *(long *)(param_1 + 0x2f80) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2f88) = lVar1;
  *(undefined4 *)(param_1 + 0x2f90) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2f68) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2f68) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2f68) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x19a84c833bf8c41b;
  local_78 = "common/itemname_acc.tbl";
  local_70 = 0x17;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2fb0) != 0) && (*(long *)(param_1 + 0x2f98) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2f98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2f98) = 0;
  }
  *(undefined8 *)(param_1 + 0x2f98) = 0;
  *(undefined8 *)(param_1 + 0x2fa0) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2fa8) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2fb0) = 0;
  if (*(long *)(param_1 + 0x2fb8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2fb8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2fb8) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2fa0) = local_58;
  *(undefined1 **)(param_1 + 0x2fa8) = local_50;
  *(long *)(param_1 + 0x2fb0) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2fb8) = lVar1;
  *(undefined4 *)(param_1 + 0x2fc0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2f98) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2f98) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2f98) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xebdc52d126d88f34;
  local_78 = "common/itemname_acc_classified.dat";
  local_70 = 0x22;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x2fe0) != 0) && (*(long *)(param_1 + 0x2fc8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2fc8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2fc8) = 0;
  }
  *(undefined8 *)(param_1 + 0x2fc8) = 0;
  *(undefined8 *)(param_1 + 0x2fd0) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x2fd8) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x2fe0) = 0;
  if (*(long *)(param_1 + 0x2fe8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2fe8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2fe8) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x2fd0) = local_58;
  *(undefined1 **)(param_1 + 0x2fd8) = local_50;
  *(long *)(param_1 + 0x2fe0) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x2fe8) = lVar1;
  *(undefined4 *)(param_1 + 0x2ff0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2fc8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2fc8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2fc8) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x74caecd173ef1487;
  local_78 = "common/itemname_acc_classified.tbl";
  local_70 = 0x22;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x3010) != 0) && (*(long *)(param_1 + 0x2ff8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2ff8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2ff8) = 0;
  }
  *(undefined8 *)(param_1 + 0x2ff8) = 0;
  *(undefined8 *)(param_1 + 0x3000) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x3008) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x3010) = 0;
  if (*(long *)(param_1 + 0x3018) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3018) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3018) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x3000) = local_58;
  *(undefined1 **)(param_1 + 0x3008) = local_50;
  *(long *)(param_1 + 0x3010) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x3018) = lVar1;
  *(undefined4 *)(param_1 + 0x3020) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x2ff8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2ff8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2ff8) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x9654922fc2c8b9d1;
  local_78 = "common/namelist.dat";
  local_70 = 0x13;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x3040) != 0) && (*(long *)(param_1 + 0x3028) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3028) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3028) = 0;
  }
  *(undefined8 *)(param_1 + 0x3028) = 0;
  *(undefined8 *)(param_1 + 0x3030) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x3038) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x3040) = 0;
  if (*(long *)(param_1 + 0x3048) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3048) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3048) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x3030) = local_58;
  *(undefined1 **)(param_1 + 0x3038) = local_50;
  *(long *)(param_1 + 0x3040) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x3048) = lVar1;
  *(undefined4 *)(param_1 + 0x3050) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x3028) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3028) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x3028) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x201608301092870a;
  local_78 = "common/namelist.tbl";
  local_70 = 0x13;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x3070) != 0) && (*(long *)(param_1 + 0x3058) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3058) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3058) = 0;
  }
  *(undefined8 *)(param_1 + 0x3058) = 0;
  *(undefined8 *)(param_1 + 0x3060) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x3068) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x3070) = 0;
  if (*(long *)(param_1 + 0x3078) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3078) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3078) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x3060) = local_58;
  *(undefined1 **)(param_1 + 0x3068) = local_50;
  *(long *)(param_1 + 0x3070) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x3078) = lVar1;
  *(undefined4 *)(param_1 + 0x3080) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x3058) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3058) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x3058) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xdf8732707c30506e;
  local_78 = "common/place_name_indirect.dat";
  local_70 = 0x1e;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x30a0) != 0) && (*(long *)(param_1 + 0x3088) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3088) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3088) = 0;
  }
  *(undefined8 *)(param_1 + 0x3088) = 0;
  *(undefined8 *)(param_1 + 0x3090) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x3098) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x30a0) = 0;
  if (*(long *)(param_1 + 0x30a8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x30a8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x30a8) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x3090) = local_58;
  *(undefined1 **)(param_1 + 0x3098) = local_50;
  *(long *)(param_1 + 0x30a0) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x30a8) = lVar1;
  *(undefined4 *)(param_1 + 0x30b0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x3088) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3088) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x3088) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x55c58c702e6631a5;
  local_78 = "common/place_name_indirect.tbl";
  local_70 = 0x1e;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x30d0) != 0) && (*(long *)(param_1 + 0x30b8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x30b8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x30b8) = 0;
  }
  *(undefined8 *)(param_1 + 0x30b8) = 0;
  *(undefined8 *)(param_1 + 0x30c0) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x30c8) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x30d0) = 0;
  if (*(long *)(param_1 + 0x30d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x30d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x30d8) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x30c0) = local_58;
  *(undefined1 **)(param_1 + 0x30c8) = local_50;
  *(long *)(param_1 + 0x30d0) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x30d8) = lVar1;
  *(undefined4 *)(param_1 + 0x30e0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x30b8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x30b8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x30b8) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x75608af7ff084381;
  local_78 = "common/another_name.dat";
  local_70 = 0x17;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x3100) != 0) && (*(long *)(param_1 + 0x30e8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x30e8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x30e8) = 0;
  }
  *(undefined8 *)(param_1 + 0x30e8) = 0;
  *(undefined8 *)(param_1 + 0x30f0) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x30f8) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x3100) = 0;
  if (*(long *)(param_1 + 0x3108) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3108) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3108) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x30f0) = local_58;
  *(undefined1 **)(param_1 + 0x30f8) = local_50;
  *(long *)(param_1 + 0x3100) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x3108) = lVar1;
  *(undefined4 *)(param_1 + 0x3110) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x30e8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x30e8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x30e8) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xeba500f7b142bffa;
  local_78 = "common/another_name.tbl";
  local_70 = 0x17;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x3130) != 0) && (*(long *)(param_1 + 0x3118) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3118) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3118) = 0;
  }
  *(undefined8 *)(param_1 + 0x3118) = 0;
  *(undefined8 *)(param_1 + 0x3120) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x3128) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x3130) = 0;
  if (*(long *)(param_1 + 0x3138) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3138) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3138) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x3120) = local_58;
  *(undefined1 **)(param_1 + 0x3128) = local_50;
  *(long *)(param_1 + 0x3130) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x3138) = lVar1;
  *(undefined4 *)(param_1 + 0x3140) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x3118) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3118) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x3118) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xff86e105c5e826ff;
  local_78 = "script/poke_memory_place.dat";
  local_70 = 0x1c;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x3160) != 0) && (*(long *)(param_1 + 0x3148) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3148) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3148) = 0;
  }
  *(undefined8 *)(param_1 + 0x3148) = 0;
  *(undefined8 *)(param_1 + 0x3150) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x3158) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x3160) = 0;
  if (*(long *)(param_1 + 0x3168) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3168) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3168) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x3150) = local_58;
  *(undefined1 **)(param_1 + 0x3158) = local_50;
  *(long *)(param_1 + 0x3160) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x3168) = lVar1;
  *(undefined4 *)(param_1 + 0x3170) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x3148) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3148) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x3148) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x893b670613a7850c;
  local_78 = "script/poke_memory_place.tbl";
  local_70 = 0x1c;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x3190) != 0) && (*(long *)(param_1 + 0x3178) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3178) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3178) = 0;
  }
  *(undefined8 *)(param_1 + 0x3178) = 0;
  *(undefined8 *)(param_1 + 0x3180) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x3188) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x3190) = 0;
  if (*(long *)(param_1 + 0x3198) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3198) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3198) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x3180) = local_58;
  *(undefined1 **)(param_1 + 0x3188) = local_50;
  *(long *)(param_1 + 0x3190) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x3198) = lVar1;
  *(undefined4 *)(param_1 + 0x31a0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x3178) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3178) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x3178) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0x4c4cf14f05d9db47;
  local_78 = "common/gwazaname.dat";
  local_70 = 0x14;
  local_68 = 0;
  FUN_014bfd20(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x31c0) != 0) && (*(long *)(param_1 + 0x31a8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x31a8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x31a8) = 0;
  }
  *(undefined8 *)(param_1 + 0x31a8) = 0;
  *(undefined8 *)(param_1 + 0x31b0) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x31b8) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x31c0) = 0;
  if (*(long *)(param_1 + 0x31c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x31c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x31c8) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x31b0) = local_58;
  *(undefined1 **)(param_1 + 0x31b8) = local_50;
  *(long *)(param_1 + 0x31c0) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x31c8) = lVar1;
  *(undefined4 *)(param_1 + 0x31d0) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x31a8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x31a8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x31a8) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_80 = 0xd527674f52df7a64;
  local_78 = "common/gwazaname.tbl";
  local_70 = 0x14;
  local_68 = 0;
  FUN_014c0480(&local_60,&local_80,10);
  if ((*(long *)(param_1 + 0x31f0) != 0) && (*(long *)(param_1 + 0x31d8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x31d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x31d8) = 0;
  }
  *(undefined8 *)(param_1 + 0x31d8) = 0;
  *(undefined8 *)(param_1 + 0x31e0) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x31e8) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x31f0) = 0;
  if (*(long *)(param_1 + 0x31f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x31f8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x31f8) = 0;
  }
  lVar1 = local_40;
  *(undefined8 *)(param_1 + 0x31e0) = local_58;
  *(undefined1 **)(param_1 + 0x31e8) = local_50;
  *(long *)(param_1 + 0x31f0) = local_48;
  local_40 = 0;
  *(long *)(param_1 + 0x31f8) = lVar1;
  *(undefined4 *)(param_1 + 0x3200) = local_38;
  if ((local_48 != 0) && (*(long *)(param_1 + 0x31d8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x31d8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x31d8) = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_014ccc80(param_1);
  do {
    nn::os::SleepThread(&LAB_00989680);
    uVar2 = FUN_014cce20(param_1);
  } while ((uVar2 & 1) == 0);
  return;
}


