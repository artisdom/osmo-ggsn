/* External interface functions of the library */

/* (C) 2014 by sysmocom - s.f.m.c. GmbH
 * Author: Pablo Neira Ayuso <pablo@gnumonks.org>
 *
 * All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <stdlib.h>
#include <netinet/in.h>

#include <libgtpnl/gtp.h>

#include "internal.h"

struct gtp_tunnel *gtp_tunnel_alloc(void)
{
	return calloc(1, sizeof(struct gtp_tunnel));
}
EXPORT_SYMBOL(gtp_tunnel_alloc);

void gtp_tunnel_free(struct gtp_tunnel *t)
{
	free(t);
}
EXPORT_SYMBOL(gtp_tunnel_free);

void gtp_tunnel_set_ifns(struct gtp_tunnel *t, int ifns)
{
	t->ifns = ifns;
}
EXPORT_SYMBOL(gtp_tunnel_set_ifns);

void gtp_tunnel_set_ifidx(struct gtp_tunnel *t, uint32_t ifidx)
{
	t->ifidx = ifidx;
}
EXPORT_SYMBOL(gtp_tunnel_set_ifidx);

void gtp_tunnel_set_ms_ip4(struct gtp_tunnel *t, struct in_addr *ms_addr)
{
	t->ms_addr = *ms_addr;
}
EXPORT_SYMBOL(gtp_tunnel_set_ms_ip4);

void gtp_tunnel_set_sgsn_ip4(struct gtp_tunnel *t, struct in_addr *sgsn_addr)
{
	t->sgsn_addr = *sgsn_addr;
}
EXPORT_SYMBOL(gtp_tunnel_set_sgsn_ip4);

void gtp_tunnel_set_version(struct gtp_tunnel *t, uint32_t version)
{
	t->gtp_version = version;
}
EXPORT_SYMBOL(gtp_tunnel_set_version);

void gtp_tunnel_set_tid(struct gtp_tunnel *t, uint64_t tid)
{
	t->tid = tid;
}
EXPORT_SYMBOL(gtp_tunnel_set_tid);

void gtp_tunnel_set_flowid(struct gtp_tunnel *t, uint16_t flowid)
{
	t->flowid = flowid;
}
EXPORT_SYMBOL(gtp_tunnel_set_flowid);

const int gtp_tunnel_get_ifns(struct gtp_tunnel *t)
{
	return t->ifns;
}
EXPORT_SYMBOL(gtp_tunnel_get_ifns);

const uint32_t gtp_tunnel_get_ifidx(struct gtp_tunnel *t)
{
	return t->ifidx;
}
EXPORT_SYMBOL(gtp_tunnel_get_ifidx);

const struct in_addr *gtp_tunnel_get_ms_ip4(struct gtp_tunnel *t)
{
	return &t->ms_addr;
}
EXPORT_SYMBOL(gtp_tunnel_get_ms_ip4);

const struct in_addr *gtp_tunnel_get_sgsn_ip4(struct gtp_tunnel *t)
{
	return &t->sgsn_addr;
}
EXPORT_SYMBOL(gtp_tunnel_get_sgsn_ip4);

int gtp_tunnel_get_version(struct gtp_tunnel *t)
{
	return t->gtp_version;
}
EXPORT_SYMBOL(gtp_tunnel_get_version);

uint64_t gtp_tunnel_get_tid(struct gtp_tunnel *t)
{
	return t->tid;
}
EXPORT_SYMBOL(gtp_tunnel_get_tid);

uint16_t gtp_tunnel_get_flowid(struct gtp_tunnel *t)
{
	return t->flowid;
}
EXPORT_SYMBOL(gtp_tunnel_get_flowid);
