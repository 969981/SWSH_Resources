/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01160cc0; name: FUN_01160cc0
 */


/* WARNING: Removing unreachable block (ram,0x01161e68) */
/* WARNING: Removing unreachable block (ram,0x01161e6c) */
/* WARNING: Removing unreachable block (ram,0x0116119c) */
/* WARNING: Removing unreachable block (ram,0x011611a0) */
/* WARNING: Removing unreachable block (ram,0x0116108c) */
/* WARNING: Removing unreachable block (ram,0x01161090) */
/* WARNING: Removing unreachable block (ram,0x01161668) */
/* WARNING: Removing unreachable block (ram,0x0116166c) */
/* WARNING: Removing unreachable block (ram,0x011616dc) */
/* WARNING: Removing unreachable block (ram,0x011616e0) */
/* WARNING: Removing unreachable block (ram,0x01161cc8) */
/* WARNING: Removing unreachable block (ram,0x01161ccc) */
/* WARNING: Removing unreachable block (ram,0x01161d3c) */
/* WARNING: Removing unreachable block (ram,0x01161d40) */
/* WARNING: Removing unreachable block (ram,0x01161db0) */
/* WARNING: Removing unreachable block (ram,0x01161db4) */
/* WARNING: Removing unreachable block (ram,0x011615bc) */
/* WARNING: Removing unreachable block (ram,0x011615c0) */
/* WARNING: Removing unreachable block (ram,0x01161548) */
/* WARNING: Removing unreachable block (ram,0x0116154c) */
/* WARNING: Removing unreachable block (ram,0x01161490) */
/* WARNING: Removing unreachable block (ram,0x01161494) */
/* WARNING: Removing unreachable block (ram,0x011613a8) */
/* WARNING: Removing unreachable block (ram,0x011613ac) */
/* WARNING: Removing unreachable block (ram,0x01161248) */
/* WARNING: Removing unreachable block (ram,0x0116124c) */
/* WARNING: Removing unreachable block (ram,0x01161edc) */
/* WARNING: Removing unreachable block (ram,0x01161ee0) */
/* WARNING: Removing unreachable block (ram,0x011612bc) */
/* WARNING: Removing unreachable block (ram,0x011612c0) */
/* WARNING: Removing unreachable block (ram,0x0116141c) */
/* WARNING: Removing unreachable block (ram,0x01161420) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01160cc0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined **local_70;
  long lStack_68;
  undefined **local_50;
  long lStack_48;
  
  if (*(char *)(param_1 + 0xb68) != '\0') {
    *(undefined1 *)(param_1 + 0xb68) = 0;
  }
  *(undefined8 *)(param_1 + 0xb80) = 0;
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0xb40) = param_2[1];
  *(undefined8 *)(param_1 + 0xb38) = uVar1;
  uVar7 = param_2[4];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  *(undefined1 *)(param_1 + 0xb60) = *(undefined1 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 0xb58) = uVar7;
  *(undefined8 *)(param_1 + 0xb50) = uVar2;
  *(undefined8 *)(param_1 + 0xb48) = uVar1;
  FUN_011552e0(param_1 + 0x700);
  lStack_48 = param_1;
  switch(*(undefined4 *)(param_1 + 0xb38)) {
  case 0:
  case 0x1c:
  case 0x22:
    pcVar4 = "msg_ui_netbtl_message_00";
    goto LAB_011610fc;
  case 1:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_01";
    *(undefined1 *)(param_1 + 0x748) = 0;
    *(undefined4 *)(param_1 + 0x780) = 0;
    local_50 = (undefined **)0xea93aaa93ad9f7a7;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_50,*(undefined8 *)(param_1 + 0x798));
    local_50 = &PTR_LAB_02678a48;
    FUN_00c056f0(&local_50,param_1 + 2000);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x784) = 1;
    local_50 = (undefined **)0xea93a9a93ad9f5f4;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_50,*(undefined8 *)(param_1 + 0x7a0));
    local_50 = &PTR_LAB_02678a90;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x800);
    (*(code *)local_50[4])();
    FUN_01160370(param_1);
    return;
  case 2:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_02";
    local_50 = &PTR_LAB_02678ad8;
    break;
  case 3:
    pcVar4 = "msg_ui_netbtl_message_03";
    goto LAB_011610fc;
  default:
    goto switchD_01160d30_caseD_4;
  case 5:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_04";
    local_50 = &PTR_LAB_02678b20;
    break;
  case 6:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_05";
    local_50 = &PTR_LAB_02678b68;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x700) = 1;
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_06";
    lVar8 = *(long *)(param_1 + 0xb90);
    lVar3 = lVar8 + 0xb8;
    *(ulong *)(param_1 + 0x728) = lVar3 + (ulong)*(byte *)(lVar8 + 0x18c) * 0x24;
    *(ushort *)(param_1 + 0x730) =
         (ushort)*(byte *)(lVar3 + (ulong)*(byte *)(lVar8 + 0x18c) * 0x24 + 0x1a);
    *(ushort *)(param_1 + 0x732) =
         (ushort)*(byte *)(lVar3 + (ulong)*(byte *)(lVar8 + 0x18c) * 0x24 + 0x1b);
    *(undefined1 *)(param_1 + 0x748) = 0;
    *(undefined4 *)(param_1 + 0x780) = 0;
    local_50 = (undefined **)0xea93aca93ad9fb0d;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_50,*(undefined8 *)(param_1 + 0x798));
    local_50 = &PTR_LAB_02678bb0;
    FUN_00c056f0(&local_50,param_1 + 2000);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x784) = 1;
    local_50 = (undefined **)0xea93aba93ad9f95a;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_50,*(undefined8 *)(param_1 + 0x7a0));
    local_50 = &PTR_LAB_02678bf8;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x800);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x788) = 2;
    local_50 = (undefined **)0x91c16a8394b71543;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_50,*(undefined8 *)(param_1 + 0x7a8));
    local_50 = &PTR_LAB_02678c40;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x830);
    (*(code *)local_50[4])();
    FUN_01160370(param_1);
    return;
  case 8:
    pcVar4 = "msg_ui_netbtl_message_07";
    goto LAB_011610fc;
  case 9:
    lVar8 = *(long *)(param_1 + 0xb90);
    *(undefined4 *)(param_1 + 0x700) = 1;
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_08";
    lVar3 = lVar8 + 0xb8;
    *(ulong *)(param_1 + 0x728) = lVar3 + (ulong)*(byte *)(lVar8 + 0x18c) * 0x24;
    *(ushort *)(param_1 + 0x730) =
         (ushort)*(byte *)(lVar3 + (ulong)*(byte *)(lVar8 + 0x18c) * 0x24 + 0x1a);
    *(ushort *)(param_1 + 0x732) =
         (ushort)*(byte *)(lVar3 + (ulong)*(byte *)(lVar8 + 0x18c) * 0x24 + 0x1b);
    local_50 = &PTR_LAB_02678c88;
    goto LAB_01161068;
  case 10:
    *(undefined4 *)(param_1 + 0x700) = 1;
    lVar8 = *(long *)(param_1 + 0xb90);
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_09";
    lVar3 = lVar8 + 0xb8;
    *(ulong *)(param_1 + 0x728) = lVar3 + (ulong)*(byte *)(lVar8 + 0x18c) * 0x24;
    *(ushort *)(param_1 + 0x730) =
         (ushort)*(byte *)(lVar3 + (ulong)*(byte *)(lVar8 + 0x18c) * 0x24 + 0x1a);
    *(ushort *)(param_1 + 0x732) =
         (ushort)*(byte *)(lVar3 + (ulong)*(byte *)(lVar8 + 0x18c) * 0x24 + 0x1b);
    goto LAB_01161100;
  case 0xb:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_28";
    local_50 = &PTR_LAB_02678cd0;
    break;
  case 0xc:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_29";
    local_50 = &PTR_LAB_02678d18;
    break;
  case 0xd:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_10";
    local_50 = &PTR_LAB_02678d60;
    break;
  case 0xf:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_30";
    *(undefined1 *)(param_1 + 0x748) = 0;
    *(undefined4 *)(param_1 + 0x780) = 0;
    local_50 = (undefined **)0xea93aaa93ad9f7a7;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_50,*(undefined8 *)(param_1 + 0x798));
    local_50 = &PTR_LAB_02678da8;
    FUN_00c056f0(&local_50,param_1 + 2000);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x784) = 1;
    local_50 = (undefined **)0xea93a9a93ad9f5f4;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_50,*(undefined8 *)(param_1 + 0x7a0));
    local_50 = &PTR_LAB_02678df0;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x800);
    (*(code *)local_50[4])();
    FUN_01160370(param_1);
    return;
  case 0x10:
    pcVar4 = "msg_ui_netbtl_message_31";
    goto LAB_011610fc;
  case 0x11:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_32";
    local_50 = &PTR_LAB_02678e38;
    break;
  case 0x12:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_33";
    local_50 = &PTR_LAB_02678e80;
    break;
  case 0x14:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_15";
    *(undefined1 *)(param_1 + 0x748) = 0;
    *(undefined4 *)(param_1 + 0x780) = 0;
    local_50 = (undefined **)0xea93aaa93ad9f7a7;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_50,*(undefined8 *)(param_1 + 0x798));
    local_50 = &PTR_LAB_02678ec8;
    FUN_00c056f0(&local_50,param_1 + 2000);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x784) = 1;
    local_50 = (undefined **)0xea93a9a93ad9f5f4;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_50,*(undefined8 *)(param_1 + 0x7a0));
    local_50 = &PTR_LAB_02678f10;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x800);
    (*(code *)local_50[4])();
    FUN_01160370(param_1);
    return;
  case 0x15:
    pcVar4 = "msg_ui_netbtl_message_16";
    goto LAB_011610fc;
  case 0x16:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_17";
    local_50 = &PTR_LAB_02678f58;
    break;
  case 0x17:
    FUN_0077d520(*(undefined8 *)(param_1 + 0x8f0),&DAT_02158cac);
    goto LAB_01161100;
  case 0x18:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_18";
    local_50 = &PTR_LAB_02678fa0;
    break;
  case 0x19:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_34";
    local_50 = &PTR_LAB_02678fe8;
    break;
  case 0x1a:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_nickname_00";
    local_50 = &PTR_LAB_02679030;
    break;
  case 0x1b:
    pcVar4 = "msg_ui_netbtl_message_19";
    goto LAB_011610fc;
  case 0x1d:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_35";
    local_50 = &PTR_LAB_02679078;
    goto LAB_01161068;
  case 0x1e:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_36";
    local_50 = &PTR_LAB_026790c0;
    goto LAB_01161068;
  case 0x1f:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_20";
    local_50 = &PTR_LAB_02679108;
    goto LAB_01161068;
  case 0x21:
    local_70 = (undefined **)0x1ff50c581084ed63;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_70,*(undefined8 *)(param_1 + 0xb20));
    FUN_014ca220(*(undefined8 *)(param_1 + 0xb28),0,*(undefined1 *)(param_1 + 0xb60),1,2,1);
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb28),*(undefined8 *)(param_1 + 0x8f0),
                 *(undefined8 *)(param_1 + 0xb20));
    *(undefined1 *)(param_1 + 0x748) = 0;
    *(undefined4 *)(param_1 + 0x780) = 0;
    local_70 = (undefined **)0x91c16b8394b716f6;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_70,*(undefined8 *)(param_1 + 0x798));
    local_70 = &PTR_LAB_02679150;
    lStack_68 = param_1;
    local_50 = (undefined **)&local_70;
    FUN_00c056f0(&local_70,param_1 + 2000);
    if (&local_70 == (undefined ***)local_50) {
      pcVar5 = *(code **)(*local_50 + 0x20);
LAB_011617ec:
      (*pcVar5)();
    }
    else if (local_50 != (undefined **)0x0) {
      pcVar5 = *(code **)(*local_50 + 0x28);
      goto LAB_011617ec;
    }
    lVar8 = *(long *)(param_1 + 0xb90);
    *(undefined4 *)(param_1 + 0x784) = 1;
    lVar3 = lVar8 + 0xb8;
    *(long *)(param_1 + 0x728) = lVar3;
    pbVar10 = (byte *)(lVar8 + 0xd2);
    *(ushort *)(param_1 + 0x730) = (ushort)*pbVar10;
    pbVar9 = (byte *)(lVar8 + 0xd3);
    lVar8 = *(long *)(param_1 + 0x7a0);
    *(ushort *)(param_1 + 0x732) = (ushort)*pbVar9;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      lVar6 = *(long *)(param_1 + 0xb90);
      lVar3 = lVar6 + 0xb8;
      pbVar10 = (byte *)(lVar6 + 0xd2);
      pbVar9 = (byte *)(lVar6 + 0xd3);
    }
    FUN_0077d520(*(undefined8 *)(param_1 + 0xb20),lVar3);
    FUN_014c9110(*(undefined8 *)(param_1 + 0xb28),0,*(undefined8 *)(param_1 + 0xb20),*pbVar10,
                 *pbVar9);
    local_70 = (undefined **)0x91c16c8394b718a9;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_70,*(undefined8 *)(param_1 + 0xb20));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb28),lVar8,*(undefined8 *)(param_1 + 0xb20));
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    local_70 = &PTR_LAB_02679198;
    lStack_68 = param_1;
    local_50 = (undefined **)&local_70;
    FUN_00c056f0(&local_70,param_1 + 0x800);
    if (&local_70 == (undefined ***)local_50) {
      pcVar5 = *(code **)(*local_50 + 0x20);
LAB_011618ec:
      (*pcVar5)();
    }
    else if (local_50 != (undefined **)0x0) {
      pcVar5 = *(code **)(*local_50 + 0x28);
      goto LAB_011618ec;
    }
    lVar8 = *(long *)(param_1 + 0xb90);
    *(undefined4 *)(param_1 + 0x788) = 2;
    lVar3 = lVar8 + 0xdc;
    *(long *)(param_1 + 0x728) = lVar3;
    pbVar10 = (byte *)(lVar8 + 0xf6);
    *(ushort *)(param_1 + 0x730) = (ushort)*pbVar10;
    pbVar9 = (byte *)(lVar8 + 0xf7);
    lVar8 = *(long *)(param_1 + 0x7a8);
    *(ushort *)(param_1 + 0x732) = (ushort)*pbVar9;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      lVar6 = *(long *)(param_1 + 0xb90);
      lVar3 = lVar6 + 0xdc;
      pbVar10 = (byte *)(lVar6 + 0xf6);
      pbVar9 = (byte *)(lVar6 + 0xf7);
    }
    FUN_0077d520(*(undefined8 *)(param_1 + 0xb20),lVar3);
    FUN_014c9110(*(undefined8 *)(param_1 + 0xb28),0,*(undefined8 *)(param_1 + 0xb20),*pbVar10,
                 *pbVar9);
    local_70 = (undefined **)0x91c16c8394b718a9;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_70,*(undefined8 *)(param_1 + 0xb20));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb28),lVar8,*(undefined8 *)(param_1 + 0xb20));
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    local_70 = &PTR_LAB_026791e0;
    lStack_68 = param_1;
    local_50 = (undefined **)&local_70;
    FUN_00c056f0(&local_70,param_1 + 0x830);
    if (&local_70 == (undefined ***)local_50) {
      pcVar5 = *(code **)(*local_50 + 0x20);
LAB_011619dc:
      (*pcVar5)();
    }
    else if (local_50 != (undefined **)0x0) {
      pcVar5 = *(code **)(*local_50 + 0x28);
      goto LAB_011619dc;
    }
    *(undefined4 *)(param_1 + 0x78c) = 3;
    lVar8 = *(long *)(param_1 + 0xb90);
    lVar3 = lVar8 + 0x100;
    *(long *)(param_1 + 0x728) = lVar3;
    *(ushort *)(param_1 + 0x730) = (ushort)*(byte *)(lVar8 + 0x11a);
    lVar6 = *(long *)(param_1 + 0x7b0);
    *(ushort *)(param_1 + 0x732) = (ushort)*(byte *)(lVar8 + 0x11b);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      lVar8 = *(long *)(param_1 + 0xb90);
      lVar3 = lVar8 + 0x100;
    }
    FUN_0077d520(*(undefined8 *)(param_1 + 0xb20),lVar3);
    FUN_014c9110(*(undefined8 *)(param_1 + 0xb28),0,*(undefined8 *)(param_1 + 0xb20),
                 *(undefined1 *)(lVar8 + 0x11a),*(undefined1 *)(lVar8 + 0x11b));
    local_70 = (undefined **)0x91c16c8394b718a9;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_70,*(undefined8 *)(param_1 + 0xb20));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb28),lVar6,*(undefined8 *)(param_1 + 0xb20));
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    local_70 = &PTR_LAB_02679228;
    lStack_68 = param_1;
    local_50 = (undefined **)&local_70;
    FUN_00c056f0(&local_70,param_1 + 0x860);
    if (&local_70 == (undefined ***)local_50) {
      pcVar5 = *(code **)(*local_50 + 0x20);
LAB_01161ac8:
      (*pcVar5)();
    }
    else if (local_50 != (undefined **)0x0) {
      pcVar5 = *(code **)(*local_50 + 0x28);
      goto LAB_01161ac8;
    }
    *(undefined4 *)(param_1 + 0x790) = 4;
    lVar8 = *(long *)(param_1 + 0xb90);
    lVar3 = lVar8 + 0x124;
    *(long *)(param_1 + 0x728) = lVar3;
    *(ushort *)(param_1 + 0x730) = (ushort)*(byte *)(lVar8 + 0x13e);
    lVar6 = *(long *)(param_1 + 0x7b8);
    *(ushort *)(param_1 + 0x732) = (ushort)*(byte *)(lVar8 + 0x13f);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      lVar8 = *(long *)(param_1 + 0xb90);
      lVar3 = lVar8 + 0x124;
    }
    FUN_0077d520(*(undefined8 *)(param_1 + 0xb20),lVar3);
    FUN_014c9110(*(undefined8 *)(param_1 + 0xb28),0,*(undefined8 *)(param_1 + 0xb20),
                 *(undefined1 *)(lVar8 + 0x13e),*(undefined1 *)(lVar8 + 0x13f));
    local_70 = (undefined **)0x91c16c8394b718a9;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_70,*(undefined8 *)(param_1 + 0xb20));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb28),lVar6,*(undefined8 *)(param_1 + 0xb20));
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    local_70 = &PTR_LAB_02679270;
    lStack_68 = param_1;
    local_50 = (undefined **)&local_70;
    FUN_00c056f0(&local_70,param_1 + 0x890);
    if (&local_70 == (undefined ***)local_50) {
      pcVar5 = *(code **)(*local_50 + 0x20);
LAB_01161bb4:
      (*pcVar5)();
    }
    else if (local_50 != (undefined **)0x0) {
      pcVar5 = *(code **)(*local_50 + 0x28);
      goto LAB_01161bb4;
    }
    *(undefined4 *)(param_1 + 0x794) = 5;
    local_70 = (undefined **)0x91c1698394b71390;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_70,*(undefined8 *)(param_1 + 0x7c0));
    local_70 = &PTR_LAB_026792b8;
    lStack_68 = param_1;
    local_50 = (undefined **)&local_70;
    FUN_00c056f0(&local_70,param_1 + 0x8c0);
    if (&local_70 == (undefined ***)local_50) {
      pcVar5 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (undefined **)0x0) goto LAB_01161c2c;
      pcVar5 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar5)();
LAB_01161c2c:
    FUN_01160370(param_1);
    return;
  case 0x23:
    pcVar4 = "msg_ui_netbtl_message_22";
    goto LAB_011610fc;
  case 0x24:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_20";
    local_50 = &PTR_LAB_02679300;
LAB_01161068:
    *(undefined1 *)(param_1 + 0x748) = 0;
    FUN_01162790(&local_50,param_1 + 0x750);
    (*(code *)local_50[4])();
    FUN_01160370(param_1);
    *(undefined8 *)(param_1 + 0xb78) = 0;
    *(undefined8 *)(param_1 + 0xb70) = 0;
    if (*(char *)(param_1 + 0xb68) == '\0') {
      *(undefined1 *)(param_1 + 0xb68) = 1;
    }
    *(undefined8 *)(param_1 + 0xb80) = 0x4004000000000000;
switchD_01160d30_caseD_4:
    return;
  case 0x27:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_23";
    *(undefined1 *)(param_1 + 0x748) = 0;
    *(undefined4 *)(param_1 + 0x780) = 0;
    local_50 = (undefined **)0xea93a1a93ad9e85c;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_50,*(undefined8 *)(param_1 + 0x798));
    local_50 = &PTR_LAB_02679348;
    FUN_00c056f0(&local_50,param_1 + 2000);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x784) = 1;
    local_50 = (undefined **)0xea9024a93ad6de1e;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_50,*(undefined8 *)(param_1 + 0x7a0));
    local_50 = &PTR_LAB_02679390;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x800);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x788) = 2;
    local_50 = (undefined **)0x91c16a8394b71543;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_50,*(undefined8 *)(param_1 + 0x7a8));
    local_50 = &PTR_LAB_026793d8;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x830);
    (*(code *)local_50[4])();
    FUN_01160370(param_1);
    return;
  case 0x28:
    pcVar4 = "msg_ui_netbtl_message_24";
LAB_011610fc:
    *(char **)(param_1 + 0x708) = pcVar4;
LAB_01161100:
    *(undefined1 *)(param_1 + 0x748) = 0;
    FUN_01160370(param_1);
    return;
  case 0x29:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_25";
    local_50 = &PTR_LAB_02679420;
    break;
  case 0x2a:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_26";
    local_50 = &PTR_LAB_02679468;
    break;
  case 0x2b:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_38";
    *(undefined1 *)(param_1 + 0x748) = 0;
    *(undefined4 *)(param_1 + 0x780) = 0;
    local_50 = (undefined **)0xea93aaa93ad9f7a7;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_50,*(undefined8 *)(param_1 + 0x798));
    local_50 = &PTR_LAB_026794b0;
    FUN_00c056f0(&local_50,param_1 + 2000);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x784) = 1;
    local_50 = (undefined **)0xea93a9a93ad9f5f4;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb18),&local_50,*(undefined8 *)(param_1 + 0x7a0));
    local_50 = &PTR_LAB_026794f8;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x800);
    (*(code *)local_50[4])();
    FUN_01160370(param_1);
    return;
  case 0x2c:
    *(char **)(param_1 + 0x708) = "msg_ui_netbtl_message_40";
    local_50 = &PTR_LAB_02679540;
  }
  FUN_01162790(&local_50,param_1 + 0x750);
  (*(code *)local_50[4])();
  FUN_01160370(param_1);
  return;
}


